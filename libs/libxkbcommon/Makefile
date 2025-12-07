COMMENT = keyboard handling library
VERSION = 1.13.1
REVISION = 0
CATEGORIES = libs
PKGNAME = libxkbcommon
HOMEPAGE = https://xkbcommon.org/
ARCHIVE = xkbcommon-${VERSION}.tar.gz
LINK = https://github.com/xkbcommon/libxkbcommon/archive/refs/tags/${ARCHIVE}
SRCCD = archive
BUILD = meson
BUILDDIR = libxkbcommon-xkbcommon-${VERSION}
BUILD_OPTION = -Denable-docs=false -Denable-wayland=true \
	 -Denable-x11=true -Ddefault_library=both

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
