#ifndef AXI4_MEM
#define AXI4_MEM

#include "axi4_slave.hpp"
#include <fstream>
#include <iostream>
extern "C" void pmem_read(long long raddr, long long *rdata);
extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

template <unsigned int A_WIDTH = 64, unsigned int D_WIDTH = 64, unsigned int ID_WIDTH = 4>
class axi4_mem : public axi4_slave<A_WIDTH,D_WIDTH,ID_WIDTH>  {
    public:
        axi4_mem(size_t size_bytes) {
            if (size_bytes % (D_WIDTH / 8)) size_bytes += 8 - (size_bytes % (D_WIDTH / 8));
            mem = new unsigned char[size_bytes];
            mem_size = size_bytes;
        }
        axi4_mem(size_t size_bytes, const uint8_t *init_binary, size_t init_binary_len):axi4_mem(size_bytes) {
            assert(init_binary_len <= size_bytes);
            memcpy(mem,init_binary,init_binary_len);
        }
        ~axi4_mem() {
            delete [] mem;
        }
        bool read(off_t start_addr, size_t size, uint8_t* buffer) {
            if (start_addr + size <= mem_size) {
                memcpy(buffer,&mem[start_addr],size);
                return true;
            }
            else return false;
        }
        bool write(off_t start_addr, size_t size, const uint8_t* buffer) {
            std::cout<<start_addr<<' '<<size<<' '<<mem_size<<std::endl;
            if (start_addr + size <= mem_size) {
                memcpy(&mem[start_addr],buffer,size);
                return true;
            }
            else return false;
        }
        void load_binary(const char *init_file, uint64_t start_addr = 0) {
            std::ifstream file(init_file,std::ios::in | std::ios::binary | std::ios::ate);
            size_t file_size = file.tellg();
            printf("start and size is %lx %lx\n", start_addr, mem_size);
            file.seekg(std::ios_base::beg);
            if (start_addr >= mem_size || file_size > mem_size - start_addr) {
                std::cerr << "memory size is not big enough for init file." << std::endl;
                file_size = mem_size;
            }
            file.read((char*)mem+start_addr,file_size);
        }
    protected:
        axi_resp do_read(uint64_t start_addr, uint64_t size, uint8_t* buffer) {
            if(((start_addr >> 28) & 0xF) == 0xA){
                
                long long int* ret = new long long int;
                pmem_read(start_addr & 0xFFFFFFF8, ret);
                //printf("r %lx size:%lx data:%lx\n",start_addr,size, *(long long int *)ret);
                memcpy(buffer,ret,size);
                return RESP_OKEY;
            } else if (start_addr + size <= mem_size) {
                memcpy(buffer,&mem[start_addr],size);
                return RESP_OKEY;
            } else return RESP_DECERR;
        }
        axi_resp do_write(uint64_t start_addr, uint64_t size, const uint8_t* buffer) {
            if(((start_addr >> 28) & 0xF) == 0xA){
                
                uint64_t data;
                memcpy((uint8_t *)(&data),buffer,size);
                //printf(" w %lx size:%lx data:%lx\n",start_addr,size,data);
                if(start_addr & 4)pmem_write(start_addr & 0xFFFFFFF8, data , 0xF0);
                else pmem_write(start_addr & 0xFFFFFFF8, data , 0x0F);
                return RESP_OKEY;
            } else if (start_addr + size <= mem_size) {
                memcpy(&mem[start_addr],buffer,size);
                return RESP_OKEY;
            } else return RESP_DECERR;
        }
    private:
        uint8_t *mem;
        size_t mem_size;
};

#endif