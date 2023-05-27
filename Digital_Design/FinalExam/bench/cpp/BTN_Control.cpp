#include <verilatedos.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include "verilated.h"
#ifdef	USE_UART_LITE
#include "VBTN_Controllite.h"
#define	SIMCLASS	VBTN_Controllite
#else
#include "VBTN_Control.h"
#define	SIMCLASS	VBTN_Control
#endif
#include "verilated_vcd_c.h"
#include "uartsim.h"
int	main(int argc, char **argv) {
	SIMCLASS	tb;
	UARTSIM		*uart;
	int		port = 0;
	unsigned	setup = 868, clocks = 0, baudclocks;

	// Set our baud rate
	// {{{
	uart = new UARTSIM(port);
	uart->setup(setup);
	baudclocks = setup & 0xfffffff;
	// }}}

	// Setup a VCD trace
	// {{{
#define	VCDTRACE
#ifdef	VCDTRACE
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC;
	tb.trace(tfp, 99);
	tfp->open("BTN_Control.vcd");
#define	TRACE_POSEDGE	tfp->dump(10*clocks)
#define	TRACE_NEGEDGE	tfp->dump(10*clocks+5)
#define	TRACE_CLOSE	tfp->close()
#else
#define	TRACE_POSEDGE
#define	TRACE_NEGEDGE
#define	TRACE_CLOSE
#endif
	// }}}

	// Main simulation loop
	// {{{
	clocks = 0;
    tb.btn = 0;
	while(clocks < 16*32*baudclocks) {

		tb.clk = 1;
		tb.eval();
		TRACE_POSEDGE;
		tb.clk = 0;
		tb.eval();
		TRACE_NEGEDGE;
        if(tb.clk == 5)
        {
            tb.btn++;
        }
		clocks++;
	}
	// }}}

	TRACE_CLOSE;
	printf("\n\nSimulation complete\n");
}