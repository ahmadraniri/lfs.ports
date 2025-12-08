COMMENT = A unit test framework for C
VERSION = 0.15.2
REVISION = 0
CATEGORIES = libs
PKGNAME = check
HOMEPAGE = https://libcheck.github.io/check/
ARCHIVE = check-${VERSION}.tar.gz
LINK = https://github.com/libcheck/check/releases/download/${VERSION}/${ARCHIVE}
SRCCD = archive
BUILD = make
BUILDDIR = check-${VERSION}
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--sysconfdir=/etc \
	--mandir=/usr/share/man \
	--localstatedir=/var \
	--disable-static \
	--enable-build-docs)

prepare:
	autoreconf -vfi ${BUILDDIR}

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
