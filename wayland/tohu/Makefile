COMMENT = floating window manager/reference implemenation for neuswc
VERSION = 0.c7c33428d
REVISION = 1
CATEGORIES = wayland
PKGNAME = tohu
HOMEPAGE = https://srcdump.net/shrub/tohu.git
SRCCD = git
BUILD = custom
BUILDDIR = tohu
EDITOR = vim
export destdir = $(PWD)/pkg
STRIP = no

prepare:
	${EDITOR} ${BUILDDIR}/source/config.h
	sed -i 's/local//' tohu/build.ninja

custom-build:
	ninja -C ${BUILDDIR}
	DESTDIR=$(PWD)/pkg ninja -C ${BUILDDIR} install

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
