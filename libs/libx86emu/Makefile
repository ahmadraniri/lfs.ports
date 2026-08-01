COMMENT = x86 emulation library
VERSION = 3.7
MAJVER = 3
REVISION = 0
CATEGORIES = libs
PKGNAME = libx86emu
HOMEPAGE = https://github.com/wfeldt/libx86emu
ARCHIVE = ${VERSION}.tar.gz
LINK = https://github.com/wfeldt/libx86emu/archive/${ARCHIVE}
SRCCD = archive
BUILD = make
BUILDDIR = ${PKGNAME}-${VERSION}
MAKEFLAGS = CFLAGS=-fPIC -Wall
MAKEOPT =	shared VERSION=${VERSION} MAJOR_VERSION=${MAJVER} LIBDIR=/usr/lib

prepare:
	echo "${VERSION}" > ${BUILDDIR}/VERSION
	rm ${BUILDDIR}/git2log

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
