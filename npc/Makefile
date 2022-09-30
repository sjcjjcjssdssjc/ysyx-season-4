TOPNAME = ysyx_22040127_top
#NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD -cc  --exe  --trace --build \
				-O3 --x-assign fast --x-initial fast --noassert \

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))


# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
#include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
CFLAGS += $(shell llvm-config-11 --cxxflags)#3steps makefile,diasm.cc,defs.h
LDFLAGS += $(shell llvm-config-11 --libs) 
LDFLAGS += -lSDL2  -lreadline -ldl #-lSDL2_image


$(BIN): $(VSRCS) $(CSRCS)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		-top $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o  $(abspath $(BIN))

run: $(BIN) 
	@rm -rf logs
	@mkdir -p logs
	./build/ysyx_22040127_top $(ARGS)

clean:
	rm -rf $(BUILD_DIR) logs obj_dir

.PHONY: clean run
