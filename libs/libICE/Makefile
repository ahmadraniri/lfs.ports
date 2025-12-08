COMMENT = X11 Inter-Client Exchange library
VERSION = 1.1.2
REVISION = 0
CATEGORIES = libs
PKGNAME = libICE
HOMEPAGE = https://xorg.freedesktop.org/
ARCHIVE = libICE-${VERSION}.tar.xz
LINK = https://www.x.org/releases/individual/lib/${ARCHIVE}
SRCCD = archive
BUILD = make
BUILDDIR = libICE-${VERSION}
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--sysconfdir=/etc \
	--enable-ipv6 \
	--enable-docs \
	--with-xmlto \
	--without-fop)

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
