COMMENT = Library for AppStream metadata
VERSION = 0.8.3
REVISION = 0
CATEGORIES = libs
PKGNAME = appstream_glib
HOMEPAGE = https://people.freedesktop.org/~hughsient/appstream-glib/
ARCHIVE = appstream-glib-0.8.3.tar.xz
LINK = https://people.freedesktop.org/~hughsient/appstream-glib/releases/appstream-glib-0.8.3.tar.xz
SRCCD = archive
BUILD = meson
BUILDDIR = appstream-glib-0.8.3
BUILD_OPTION = -Ddep11=true \
	-Dbuilder=true \
	-Drpm=false \
	-Dalpm=false \
	-Dfonts=true \
	-Dman=false \
	-Dgtk-doc=false \
	-Dintrospection=true

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
