# $FreeBSD: releng/11.1/share/dtrace/Makefile 300226 2016-05-19 19:51:39Z gnn $
#
# Hand installing our scripts and optionally (based on MK_CDDL) installing
# the DTraceToolkit.
#

.include <src.opts.mk>

SCRIPTS=	blocking \
		disklatency \
		disklatencycmd \
		hotopen \
		nfsattrstats \
		nfsclienttime \
		siftr \
		tcpconn \
		tcpdebug \
		tcpstate \
		tcptrack \
		udptrack \
		watch_execve \
		watch_kill \
		watch_vop_remove

SCRIPTSDIR= ${SHAREDIR}/dtrace

DSRCS=		mbuf.d

FILES=		${DSRCS}
FILESDIR=	/usr/lib/dtrace
FILESMODE=	${NOBINMODE}

.include <bsd.prog.mk>
