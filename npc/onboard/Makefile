ifneq ($(words $(CURDIR)),1)
$(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')  
endif
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")


default:
	$(VERILATOR) -cc --exe --build -j --trace $(VSRCS) $(CSRCS)
	obj_dir/Vtop +trace

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir *.log *.dmp *.vpd core
	-rm -rf logs













