COMMENT = x86 emulation library
VERSION = 3.7
MAJVER = 3
REVISION = 0
CATEGORIES = libs
PKGNAME = libx86emu
HOMEPAGE = https://github.com/wfeldt/libx86emu
ARCHIVE = ${VERSION}.tar.gz
LINK = https://github.com/wfeldt/libx86emu
SRCCD = git
BUILD = make
BUILDDIR = ${PKGNAME}
MAKEFLAGS = "CFLAGS=-fPIC -Wall"
MAKEOPT =	shared VERSION=${VERSION} MAJOR_VERSION=${MAJVER} LIBDIR=/usr/lib

prepare:
	git -C ${BUILDDIR} checkout 3.7

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
