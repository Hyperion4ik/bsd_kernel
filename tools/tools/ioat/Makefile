# $FreeBSD: releng/11.1/tools/tools/ioat/Makefile 300862 2016-05-27 18:40:38Z ngie $

PROG=	ioatcontrol
MAN=	ioatcontrol.8
BINDIR?=	/usr/bin

CFLAGS+=	-I${SRCTOP}/sys/dev/ioat

LIBADD=	util

WARNS?=	6

.include <bsd.prog.mk>
