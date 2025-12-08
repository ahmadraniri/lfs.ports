COMMENT = X11 toolkit intrinsics library
VERSION = 1.3.1
REVISION = 0
CATEGORIES = libs
PKGNAME = libXt
HOMEPAGE = https://xorg.freedesktop.org/
ARCHIVE = libXt-${VERSION}.tar.xz
LINK = https://www.x.org/releases/individual/lib/${ARCHIVE}
SRCCD = archive
BUILD = make
BUILDDIR = libXt-${VERSION}
AUTO_CONF = (cd ${BUILDDIR} && ./configure CFLAGS="-flto=auto" \
	--prefix=/usr \
	--sysconfdir=/etc \
	--disable-static)

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
