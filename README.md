This is the fork of the FreeBSD source directory aimed to be a firewall.  
The `buildkernel` and `installkernel` targets build and install
the kernel and the modules (see below).  Please see the top of
the Makefile in this directory for more information on the
standard build targets and compile-time flags. The kernel configuration 
files reside in the sys/<arch>/conf sub-directory. FIREWALL is the default
configuration used in this fork builds.



Source Roadmap:
---------------

bin		System/user commands.

cddl		Various commands and libraries under the Common Development
		and Distribution License.

contrib		Packages contributed by 3rd parties.

crypto		Cryptography stuff (see crypto/README).

etc		Template files for /etc.

gnu		Various commands and libraries under the GNU Public License.
		Please see gnu/COPYING* for more information.

include		System include files.

kerberos5	Kerberos5 (Heimdal) package.

lib		System libraries.

libexec		System daemons.

release		Release building Makefile & associated tools.

rescue		Build system for statically linked /rescue utilities.

sbin		System commands.

secure		Cryptographic libraries and commands.

share		Shared resources.

sys		Kernel sources.

tests		Regression tests which can be run by Kyua.  See tests/README
		for additional information.

tools		Utilities for regression testing and miscellaneous tasks.

usr.bin		User commands.

usr.sbin	System administration commands.
