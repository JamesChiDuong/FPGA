.PHONY: all
.DELETE_ON_ERROR:
## }}}
all:	test

YYMMDD=`date +%Y%m%d`
CXX   := g++
FBDIR := .
VDIRFB:= $(FBDIR)/obj_dir
RTLDR := ../../rtl
VERILATOR := verilator
VFLAGS := -Wall --MMD --trace -y $(RTLDR) -cc
.PHONY: test testBTNControl
## }}} 
#test: testline testlinelite testhello testhellolite speechfifo speechfifolite
test:testBTNControl testBTNControllite 

testBTNControl: 	$(VDIRFB)/VBTN_Control__ALL.a
testBTNControllite:	$(VDIRFB)/VBTN_Controllite__ALL.a

$(VDIRFB)/VBTN_Control__ALL.a: 	$(VDIRFB)/VBTN_Control.cpp

$(VDIRFB)/V%.mk:  $(VDIRFB)/V%.h
$(VDIRFB)/V%.h:   $(VDIRFB)/V%.cpp
$(VDIRFB)/V%.cpp: $(FBDIR)/%.v
	$(VERILATOR) $(VFLAGS) $*.v


$(VDIRFB)/VBTN_Controllite.cpp: 		$(FBDIR)/BTN_Control.v
	$(VERILATOR) $(VFLAGS) -DUSE_UART_LITE --prefix VBTN_Controllite BTN_Control.v

$(VDIRFB)/V%__ALL.a: $(VDIRFB)/V%.cpp
	cd $(VDIRFB); make -f V$*.mk
## }}}

## TAGS
## {{{
tags: $(wildcard *.v) $(wildcard $(RTLDR)/*.v)
	ctags *.v $(RTLDR)/*.v
## }}}

## Clean
## {{{
.PHONY: clean
clean:
	rm -rf tags $(VDIRFB)/
## }}}

## Automatic dependency handling
## {{{
DEPS := $(wildcard $(VDIRFB)/*.d)

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(DEPS),)
include $(DEPS)
endif
endif