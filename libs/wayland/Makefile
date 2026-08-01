COMMENT = Protocols and protocol extensions complementing the Wayland core protocol
VERSION = 1.26.0
REVISION = 0
CATEGORIES = libs
PKGNAME = wayland
HOMEPAGE = https://wayland.freedesktop.org
ARCHIVE = wayland-${VERSION}.tar.xz
LINK = https://gitlab.freedesktop.org/wayland/wayland/-/releases/${VERSION}/downloads/${ARCHIVE}
SRCCD = archive
BUILD = meson
BUILDDIR = wayland-${VERSION}
BUILD_OPTION = -Dtests=false -Ddocumentation=false 

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
