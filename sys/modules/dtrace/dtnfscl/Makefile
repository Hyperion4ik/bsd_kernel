# $FreeBSD: releng/11.1/sys/modules/dtrace/dtnfscl/Makefile 319182 2017-05-30 04:11:12Z ngie $

SYSDIR?=	${SRCTOP}/sys

.PATH:		${SYSDIR}/fs/nfsclient

KMOD=		dtnfscl
SRCS=		nfs_clkdtrace.c \
		vnode_if.h

CFLAGS+=	-I${SYSDIR}/cddl/compat/opensolaris \
		-I${SYSDIR}/cddl/contrib/opensolaris/uts/common \
		-I${SYSDIR}

.include <bsd.kmod.mk>

CFLAGS+=	-include ${SYSDIR}/cddl/compat/opensolaris/sys/debug_compat.h
