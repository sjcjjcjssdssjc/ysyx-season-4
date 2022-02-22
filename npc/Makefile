OBJECTS = ./csrc/main.cpp ./vsrc/top.v
TARGET = ./obj_dir/Vtop

all: $(TARGET)
$(TARGET): $(OBJECTS)
	verilator -Wall --cc --exe --build ./csrc/main.cpp ./vsrc/top.v
    
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	ls -l obj-dir
	obj_dir/Vtop

include ../Makefile
