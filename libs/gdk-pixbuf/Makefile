COMMENT = An image loading library
VERSION = 2.44.4
REVISION = 0
CATEGORIES = libs
PKGNAME = gdk-pixbuf
HOMEPAGE = https://developer.gnome.org/gdk-pixbuf/stable/
ARCHIVE = gdk-pixbuf-${VERSION}.tar.xz
LINK = https://download.gnome.org/sources/gdk-pixbuf/${VERSION%.*}/${ARCHIVE}
SRCCD = archive
BUILD = meson
BUILDDIR = gdk-pixbuf-${VERSION}
BUILD_OPTION = -Dman=false -Dinstalled_tests=false -Dglycin=disabled 

prepare:

post_build:

post-install:
	gdk-pixbuf-query-loaders --update-cache

include /usr/share/mk/lfs.port.mk
