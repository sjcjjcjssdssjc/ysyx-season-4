OBJECTS = ./csrc/main.cpp ./vsrc/top.v
TARGET = ./obj_dir/Vtop

all: 
	verilator -Wall --cc --exe ./csrc/main.cpp ./vsrc/top.v
    
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	make -j -C obj_dir -f Vtop.mk Vtop
	obj_dir/Vtop
clean:
	rm -r obj_dir
include ../Makefile
