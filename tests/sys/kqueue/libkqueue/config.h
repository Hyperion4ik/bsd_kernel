/* $FreeBSD: releng/11.1/tests/sys/kqueue/libkqueue/config.h 305467 2016-09-06 08:45:29Z ngie $ */

#define HAVE_ERR_H 1
#define HAVE_SYS_EVENT_H 1
#define HAVE_EV_DISPATCH 1
#define HAVE_EV_RECEIPT 1
#undef HAVE_NOTE_TRUNCATE
#define HAVE_EVFILT_TIMER 1
#define HAVE_EVFILT_USER 1
#define PROGRAM "libkqueue-test"
#define VERSION "0.1"
#define TARGET "freebsd"
#define CFLAGS "-g -O0 -Wall -Werror"