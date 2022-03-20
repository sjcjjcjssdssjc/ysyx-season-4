ifdef CONFIG_DIFFTEST
DIFF_REF_PATH = $(NEMU_HOME)/$(call remove_quote,$(CONFIG_DIFFTEST_REF_PATH))
$(info ref path is $(CONFIG_DIFFTEST_REF_PATH))#"tools/spike-diff" in this case
DIFF_REF_SO = $(DIFF_REF_PATH)/build/$(GUEST_ISA)-$(call remove_quote,$(CONFIG_DIFFTEST_REF_NAME))-so
$(info ref so in $(DIFF_REF_SO))#"tools/spike-diff" in this case
MKFLAGS = GUEST_ISA=$(GUEST_ISA) SHARE=1 ENGINE=interpreter
ARGS_DIFF = --diff=$(DIFF_REF_SO)

ifndef CONFIG_DIFFTEST_REF_NEMU
$(DIFF_REF_SO):
	$(MAKE) -s -C $(DIFF_REF_PATH) $(MKFLAGS)
endif

.PHONY: $(DIFF_REF_SO)
endif
