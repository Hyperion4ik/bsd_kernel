This is the fork of the FreeBSD source directory aimed to be a firewall.  
The `buildkernel` and `installkernel` targets build and install
the kernel and the modules (see below).  Please see the top of
the Makefile in this directory for more information on the
standard build targets and compile-time flags. The kernel configuration 
files reside in the sys/<arch>/conf sub-directory. FIREWALL is the default
configuration used in this fork builds.

Modification:

sys/netpfil/pf - sources of pf firewall, part of kernel.

sbin/pfctl - sources of pfctl utility, external utility. 

sbin/pfctl/pfctl.c - flags of pfctl utility

sys/netinet/tcp_fsm.h - состояния соединений


Description of TCP State Machine

In the case of TCP, the finite state machine can be considered to describe the “life stages” of a connection. Each connection between one TCP device and another begins in a null state where there is no connection, and then proceeds through a series of states until a connection is established. It remains in that state until something occurs to cause the connection to be closed again, at which point it proceeds through another sequence of transitional states and returns to the closed state.

```C
#define	TCP_NSTATES	11

#define	TCPS_CLOSED		0	/* closed */
#define	TCPS_LISTEN		1	/* listening for connection */
#define	TCPS_SYN_SENT		2	/* active, have sent syn */
#define	TCPS_SYN_RECEIVED	3	/* have sent and received syn */
/* states < TCPS_ESTABLISHED are those where connections not established */
#define	TCPS_ESTABLISHED	4	/* established */
#define	TCPS_CLOSE_WAIT		5	/* rcvd fin, waiting for close */
/* states > TCPS_CLOSE_WAIT are those where user has closed */
#define	TCPS_FIN_WAIT_1		6	/* have closed, sent fin */
#define	TCPS_CLOSING		7	/* closed xchd FIN; await FIN ACK */
#define	TCPS_LAST_ACK		8	/* had fin and close; await FIN ACK */
/* states > TCPS_CLOSE_WAIT && < TCPS_FIN_WAIT_2 await ACK of FIN */
#define	TCPS_FIN_WAIT_2		9	/* have closed, fin is acked */
#define	TCPS_TIME_WAIT		10	/* in 2*msl quiet wait after close */
```

pfctl -c 127.0.0.1 -c 127.0.128 -tcpstate ESTABLISHED
pfctl -c 127.0.0.1 -c 127.0.128 -tcpstate CLOSE_WAIT