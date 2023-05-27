.PHONY: all
all : test

.DELETE_ON_ERROR:
VERILATOR := verilator
CXX := g++;
FBDIR := .
VDIRFB := $(FBDIR)/obj_dir

.PHONY: test
test: $(VDIRFB)/Valu__ALL.a
test: $(VDIRFB)/Vcounter__ALL.a
test: $(VDIRFB)/Vsegment_7__ALL.a
test: $(VDIRFB)/Vdebounce_explicit__ALL.a
test: $(VDIRFB)/Vtestbench_debounce__ALL.a


$(VDIRFB)/Valu__ALL.a:     $(VDIRFB)/Valu.cpp
$(VDIRFB)/Vcounter__ALL.a:     $(VDIRFB)/Vcounter.cpp
$(VDIRFB)/Vsegment_7__ALL.a:     $(VDIRFB)/Vsegment_7.cpp
$(VDIRFB)/Vdebounce_explicit__ALL.a:  $(VDIRFB)/Vdebounce_explicit.cpp
$(VDIRFB)/Vtestbench_debounce__ALL.a: $(VDIRFB)/Vtestbench_debounce.cpp


$(VDIRFB)/V%.mk:  $(VDIRFB)/%.h
$(VDIRFB)/V%.h:   $(VDIRFB)/%.cpp
$(VDIRFB)/V%.cpp: $(FBDIR)/%.v
	$(VERILATOR) --trace -MMD -Wall -cc $*.v


testbench_debounce:
	iverilog debounce_explicit.v testbench_debounce.v
testbench_segment:
	iverilog segment_7.v testbench_segment.v
testbench_Top:
	iverilog debounce_explicit.v segment_7.v BTN_Control.v alu.v Top_Module.v testbench_Top.v
run:
	vvp a.out
simulation:
	gtkwave Top_Module.vcd
clean:
	rm -rf tags $(VDIRFB)/
	rm -f a.out
	rm -f segment.vcd
	rm -f debounce.vcd
	rm -f Top_Module.vcd