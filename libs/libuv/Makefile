COMMENT = An asynchronous I/O library.
VERSION = v1.51.0
REVISION = 0
CATEGORIES = libs
PKGNAME = libuv
HOMEPAGE = https://www.libuv.org
ARCHIVE = libuv-v1.51.0.tar.gz
LINK = https://dist.libuv.org/dist/v1.51.0/libuv-v1.51.0.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = libuv-v1.51.0
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--sysconfdir=/etc \
	--libdir=/usr/lib \
	--build=x86_64-pc-linux-musl)
MAKEOPT =

prepare:
	cd ${BUILDDIR} && sh ./autogen.sh

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
