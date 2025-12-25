COMMENT = A highly portable C library that encodes or decodes an ASN.1 schema.
VERSION = 4.20.0
REVISION = 0
CATEGORIES = libs
PKGNAME = libtasn1
HOMEPAGE = https://www.gnu.org/software/libtasn1
ARCHIVE = libtasn1-4.20.0.tar.gz
LINK = https://ftp.gnu.org/gnu/libtasn1/libtasn1-4.20.0.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = libtasn1-4.20.0
BUILD_OPTION =
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--sysconfdir=/etc \
	--libdir=/usr/lib \
	--enable-shared=yes \
	--build=x86_64-pc-linux-musl)
MAKEOPT =

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
