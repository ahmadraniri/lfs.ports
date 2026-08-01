COMMENT = TIFF library and utilities.
VERSION = 4.7.2
REVISION = 0
CATEGORIES = libs
PKGNAME = tiff
HOMEPAGE = https://www.simplesystems.org/libtiff/
ARCHIVE = tiff-${VERSION}.tar.gz
LINK = https://download.osgeo.org/libtiff/tiff-${VERSION}.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = tiff-${VERSION}
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--sysconfdir=/etc \
	--libdir=/usr/lib \
	--enable-shared=yes \
	--enable-cxx \
	--enable-zstd \
	--enable-lzma \
	--build=x86_64-pc-linux-musl)
MAKEOPT =

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
