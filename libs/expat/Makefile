COMMENT = XML Parser library written in C
VERSION = 2.8.3
_V = $(shell sed 'y/./_/' <<< ${VERSION})
REVISION = 0
CATEGORIES = libs
PKGNAME = expat
HOMEPAGE = https://libexpat.github.io/
ARCHIVE = R_${_V}.tar.gz
LINK = https://github.com/libexpat/libexpat/archive/refs/tags/${ARCHIVE}
SRCCD = archive
BUILD = cmake
BUILDDIR = libexpat-R_${_V}/expat
BUILD_OPTION = -DCMAKE_BUILD_TYPE=none -Wno-dev

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
