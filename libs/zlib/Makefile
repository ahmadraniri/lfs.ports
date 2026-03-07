COMMENT = A data compression library.
VERSION = 1.3.2
REVISION = 0
CATEGORIES = libs
PKGNAME = zlib
HOMEPAGE = https://zlib.net
ARCHIVE = zlib-1.3.2.tar.gz
LINK = https://zlib.net/fossils/zlib-1.3.2.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = zlib-1.3.2
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--libdir=/usr/lib \
	--shared)
MAKEOPT =

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
