COMMENT = The System V init (version 3.15).
VERSION = 3.15
REVISION = 0
CATEGORIES = daemon
PKGNAME = sysvinit
HOMEPAGE = https://savannah.nongnu.org/projects/sysvinit
ARCHIVE = 3.15.tar.gz
LINK = https://github.com/slicer69/sysvinit/archive/refs/tags/3.15.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = sysvinit-3.15
MAKEOPT = ROOT=$(PWD)/package
CPPFLAGS = -D_FORTIFY_SOURCE=1
export CPPFLAGS

prepare:
	for i in patch/*; do patch -p1 -d ${BUILDDIR} -i $(PWD)/$$i; done

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
