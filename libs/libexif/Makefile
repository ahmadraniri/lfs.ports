COMMENT = Library for parsing, editing, and saving EXIF data.
VERSION = 0.6.25
REVISION = 0
CATEGORIES = libs
PKGNAME = libexif
HOMEPAGE = https://libexif.github.io
ARCHIVE = libexif-0.6.25.tar.bz2
LINK = https://github.com/libexif/libexif/releases/download/v0.6.25/libexif-0.6.25.tar.bz2
SRCCD = archive
BUILD = make
BUILDDIR = libexif-0.6.25
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
