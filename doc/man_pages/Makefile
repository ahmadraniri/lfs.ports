COMMENT = Linux man pages
VERSION = 6.15
REVISION = 0
CATEGORIES = doc
PKGNAME = man_pages
HOMEPAGE = https://www.kernel.org/doc/man-pages/
ARCHIVE = man-pages-6.16.tar.xz
LINK = https://cdn.kernel.org/pub/linux/docs/man-pages/man-pages-6.16.tar.xz
SRCCD = archive
BUILD = make
BUILDDIR = man-pages-6.16
MAKEOPT = -R GIT=false prefix=/usr

prepare:
	rm -v ${BUILDDIR}/man3/crypt*

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
