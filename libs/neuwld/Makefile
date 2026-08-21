COMMENT = less primitive primitive drawing library for wayland
VERSION = 0.c554f827c
_SHA = 554f827cadfdfcc276c709dbffa3b2b04c70cf7c
REVISION = 0
CATEGORIES = libs
PKGNAME = neuwld
HOMEPAGE = https://git.sr.ht/~shrub900/neuwld
SRCCD = archive
ARCHIVE = ${_SHA}.tar.gz 
LINK = ${HOMEPAGE}/archive/${ARCHIVE}
BUILD = meson
BUILDDIR = neuwld-${_SHA}
BUILD_OPTION = -Dwayland=enabled \
	-Ddrm=enabled \
	-Ddrivers=intel
STRIP = no

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
