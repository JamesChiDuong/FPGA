CXX	:= g++
FLAGS	:= -std=c++11 -Wall -Og -g
OBJDIR  := obj-pc
RTLD	:= ../verilog
VERILATOR_ROOT ?= $(shell bash -c 'verilator -V|grep VERILATOR_ROOT | head -1 | sed -e " s/^.*=\s*//"')
VROOT   := $(VERILATOR_ROOT)
INCS	:= -I$(RTLD)/obj_dir/ -I$(VROOT)/include
SOURCES := BTN_Control.cpp
VOBJDR	:= $(RTLD)/obj_dir
SYSVDR	:= $(VROOT)/include
## }}}
all:	$(OBJDIR)/ BTN_Control BTN_Controllite

# Verilator's generated Makefile sets VM_*
-include $(VOBJDR)/VBTN_Control_classes.mk
VSRC	:= $(addsuffix .cpp, $(VM_GLOBAL_FAST) $(VM_GLOBAL_SLOW))
VLIB	:= $(addprefix $(OBJDIR)/,$(subst .cpp,.o,$(VSRC)))

$(OBJDIR)/uartsim.o: uartsim.cpp uartsim.h
$(OBJDIR)/%.o: %.cpp
	$(mk-objdir)
	$(CXX) $(FLAGS) $(INCS) -c $< -o $@

$(OBJDIR)/%.o: $(SYSVDR)/%.cpp
	$(mk-objdir)
	$(CXX) $(FLAGS) $(INCS) -c $< -o $@


## Data_Transmitter
## {{{
# Sources necessary to build the helloworld test (txuart test)
LINSRCS := BTN_Control.cpp uartsim.cpp
LINOBJ := $(subst .cpp,.o,$(LINSRCS))
LINOBJS:= $(addprefix $(OBJDIR)/,$(LINOBJ)) $(VLIB)
BTN_Control: $(LINOBJS) $(VOBJDR)/VBTN_Control__ALL.a
	$(CXX) $(FLAGS) $(INCS) $^ -lpthread -o $@
## }}}

## Data_Transmitterlite
## {{{
$(OBJDIR)/BTN_Controllite.o: BTN_Control.cpp
	$(mk-objdir)
	$(CXX) $(FLAGS) $(INCS) -DUSE_UART_LITE -c $< -lpthread -o $@


LINLTOBJ := BTN_Controllite.o
LINLTOBJS:= $(addprefix $(OBJDIR)/,$(LINLTOBJ)) $(VLIB)
BTN_Controllite: $(LINLTOBJS) $(VOBJDR)/VBTN_Controllite__ALL.a
	$(CXX) $(FLAGS) $(INCS) $^ -lpthread -o $@
## }}}
## test
## {{{
test: 
#	 ./Data_Transmitter
#	# ./Data_Transmitterlite
#	# ./Data_Receiver
#	# ./Data_Receiverlite
	./BTN_Control
	./BTN_Controllite
#
define	build-depends
	$(mk-objdir)
	@echo "Building dependency file"
	@$(CXX) $(FLAGS) $(INCS) -MM $(SOURCES) > $(OBJDIR)/xdepends.txt
	@sed -e 's/^.*.o: /$(OBJDIR)\/&/' < $(OBJDIR)/xdepends.txt > $(OBJDIR)/depends.txt
	@rm $(OBJDIR)/xdepends.txt
endef

.PHONY: depends
depends:
	$(build-depends)

$(OBJDIR)/depends.txt: depends

#
define	mk-objdir
	@bash -c "if [ ! -e $(OBJDIR) ]; then mkdir -p $(OBJDIR); fi"
endef

#
# The "tags" target
#
tags:	$(SOURCES) $(HEADERS)
	@echo "Generating tags"
	@ctags $(SOURCES) $(HEADERS)

.PHONY: clean
clean:
	rm -f ./BTN_Control ./BTN_Controllite
	rm -f BTN_Control.vcd

	rm -rf $(OBJDIR)/

ifneq ($(MAKECMDGOALS),clean)
-include $(OBJDIR)/depends.txt
endif