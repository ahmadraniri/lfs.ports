COMMENT = Modular Wayland compositor library
VERSION = 0.19.2
REVISION = 0
CATEGORIES = libs
PKGNAME = wlroots
HOMEPAGE = https://gitlab.freedesktop.org/wlroots/wlroots
ARCHIVE = wlroots-${VERSION}.tar.gz
LINK = ${HOMEPAGE}/-/archive/${VERSION}/${ARCHIVE}
SRCCD = archive
BUILD = meson
BUILDDIR = wlroots-${VERSION}
BUILD_OPTION = -Dexamples=false -Dxwayland=enabled

prepare:

post_build:

include /usr/share/mk/lfs.port.mk
