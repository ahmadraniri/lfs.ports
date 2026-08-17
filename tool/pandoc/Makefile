COMMENT = Universal markup converter
VERSION = 3.10.2
REVISION = 0
CATEGORIES = tool
PKGNAME = pandoc
HOMEPAGE = https://pandoc.org/
ARCHIVE = pandoc-${VERSION}-linux-amd64.tar.gz
LINK = https://github.com/jgm/pandoc/releases/download/${VERSION}/${ARCHIVE}
SRCCD = archive
BUILD = custom
BUILDDIR = pandoc-3.10.2
STRIP = no

prepare:

custom-build:
	mkdir -p pkg/usr
	cp -r ${BUILDDIR}/{bin,share} pkg/usr

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
