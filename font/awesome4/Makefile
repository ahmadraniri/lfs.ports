COMMENT = Iconic font designed for Bootstrap
VERSION = 4.7.0
REVISION = 0
CATEGORIES = font
PKGNAME = awesome.font4
HOMEPAGE = http://fortawesome.github.io/Font-Awesome/
ARCHIVE = v4.7.0.tar.gz
LINK = https://github.com/FortAwesome/Font-Awesome/archive/v4.7.0.tar.gz
SRCCD = archive
BUILD = custom
BUILDDIR = Font-Awesome-4.7.0/fonts

prepare:

custom-build:
	install -d "pkg/usr/share/fonts/TTF"
	install -m644 ${BUILDDIR}/*.ttf "pkg/usr/share/fonts/TTF"
	install -m644 ${BUILDDIR}/*.otf "pkg/usr/share/fonts/TTF"

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
