COMMENT = The GTK Toolkit (v4)
VERSION = 4.21.4
REVISION = 0
CATEGORIES = libs
PKGNAME = gtk4.0
HOMEPAGE = https://www.gtk.org/
ARCHIVE = gtk-4.21.4.tar.xz
LINK = https://download.gnome.org/sources/gtk/4.21/gtk-4.21.4.tar.xz
SRCCD = archive
BUILD = meson
BUILDDIR = gtk-4.21.4
BUILD_OPTION = -Ddocumentation=false \
	-Dintrospection=enabled \
	-Dbroadway-backend=false \
	-Dman-pages=false \
	-Dbuild-tests=false \
	-Dbuild-examples=false \
	-Dbuild-testsuite=false

prepare:

post_build:
	rm -f "build/package/usr/bin/gtk-update-icon-cache"
	rm -f "build/package/usr/bin/gtk4-update-icon-cache"

post-install:

include /usr/share/mk/lfs.port.mk
