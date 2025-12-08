COMMENT = X.Org screen saver extension
VERSION = 1.2.5
REVISION = 0
CATEGORIES = libs
PKGNAME = libXScrnSaver
HOMEPAGE = https://cgit.freedesktop.org/xorg/lib/libXScrnSaver/
ARCHIVE = libXScrnSaver-${VERSION}.tar.xz
LINK = https://www.x.org/releases/individual/lib/${ARCHIVE}
SRCCD = archive
BUILD = make
BUILDDIR = libXScrnSaver-${VERSION}
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--sysconfdir=/etc \
	--mandir=/usr/share/man \
	--infodir=/usr/share/info \
	--localstatedir=/var \
	--disable-static)

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
