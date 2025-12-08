COMMENT = X11 Session Management library
VERSION = 1.2.6
REVISION = 0
CATEGORIES = libs
PKGNAME = libSM
HOMEPAGE = https://xorg.freedesktop.org/
ARCHIVE = libSM-${VERSION}.tar.xz
LINK = https://www.x.org/releases/individual/lib/${ARCHIVE}
SRCCD = archive
BUILD = make
BUILDDIR = libSM-${VERSION}
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--sysconfdir=/etc \
	--with-libuuid \
	--enable-docs \
	--with-xmlto \
	--without-fop)

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
