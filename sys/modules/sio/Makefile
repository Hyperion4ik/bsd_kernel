# $FreeBSD: releng/11.1/sys/modules/sio/Makefile 319182 2017-05-30 04:11:12Z ngie $

.if ${MACHINE} == "pc98"
.PATH: ${SRCTOP}/sys/pc98/cbus
.endif
.PATH: ${SRCTOP}/sys/dev/sio

KMOD=	sio
SRCS=	bus_if.h card_if.h device_if.h isa_if.h pci_if.h serdev_if.h \
	opt_compat.h opt_gdb.h opt_kdb.h opt_sio.h \
	sio.c sio_pccard.c sio_pci.c sio_puc.c pccarddevs.h
.if ${MACHINE} == "pc98"
SRCS+=	sio_cbus.c
.else
SRCS+=	sio_isa.c
.endif

.if !defined(KERNBUILDDIR)
opt_compat.h:
	echo "#define COMPAT_43 1" > ${.TARGET}

.if ${MACHINE} == "pc98"
opt_sio.h:
	echo "#define COM_MULTIPORT 1" > ${.TARGET}
	echo "#define COM_ESP 1" >> ${.TARGET}
.endif
.endif

.include <bsd.kmod.mk>
