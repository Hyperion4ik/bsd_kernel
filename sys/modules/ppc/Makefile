# $FreeBSD: releng/11.1/sys/modules/ppc/Makefile 319182 2017-05-30 04:11:12Z ngie $

.PATH:	${SRCTOP}/sys/dev/ppc
KMOD=	ppc
SRCS=	bus_if.h device_if.h ppbus_if.h isa_if.h pci_if.h serdev_if.h \
	opt_ppc.h opt_isa.h \
	ppc.c ppc_pci.c ppc_puc.c

.if ${MACHINE_CPUARCH} == "amd64"
SRCS+=	ppc_acpi.c ppc_isa.c
.endif

.if ${MACHINE_CPUARCH} == "i386"
.if ${MACHINE} != "pc98"
SRCS+=	ppc_acpi.c
.endif
SRCS+=	ppc_isa.c
.endif

.include <bsd.kmod.mk>
