# $FreeBSD: releng/11.1/tests/sys/kqueue/libkqueue/Makefile 305467 2016-09-06 08:45:29Z ngie $

TESTSDIR=	${TESTSBASE}/sys/kqueue/libkqueue
BINDIR=		${TESTSDIR}

# libkqueue and test suite by Mark Heily <mark@heily.com>
TAP_TESTS_SH=	kqueue_test

PROGS=	kqtest

SRCS.kqtest=		\
	main.c		\
	read.c		\
	timer.c		\
	vnode.c		\
	proc.c		\
	signal.c	\
	user.c
WARNS?=	2

.include <bsd.test.mk>
