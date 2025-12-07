COMMENT = XML stylesheet transformation library
VERSION = 1.1.43
REVISION = 0
CATEGORIES = libs
PKGNAME = libxslt
HOMEPAGE = http://xmlsoft.org/XSLT/
ARCHIVE = libxslt-${VERSION}.tar.xz
LINK = https://download.gnome.org/sources/libxslt/1.1/${ARCHIVE}
SRCCD = archive
BUILD = make
BUILDDIR = libxslt-${VERSION}
AUTO_CONF = (cd ${BUILDDIR} && ./configure --prefix=/usr \
	--with-python=no --enable-static)

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
