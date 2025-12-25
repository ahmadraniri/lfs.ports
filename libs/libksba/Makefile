COMMENT = CMS and X.509 access library.
VERSION = 1.6.7
REVISION = 0
CATEGORIES = libs
PKGNAME = libksba
HOMEPAGE = https://www.gnupg.org
ARCHIVE = libksba-1.6.7.tar.bz2
LINK = https://www.gnupg.org/ftp/gcrypt/libksba/libksba-1.6.7.tar.bz2
SRCCD = archive
BUILD = make
BUILDDIR = libksba-1.6.7
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--sysconfdir=/etc \
	--libdir=/usr/lib \
	--build=x86_64-pc-linux-musl)
MAKEOPT =

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
