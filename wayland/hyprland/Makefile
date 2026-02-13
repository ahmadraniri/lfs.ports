COMMENT = Independent, highly customizable, dynamic tiling Wayland compositor that doesn't sacrifice on its looks.
VERSION = 0.53.3
_REV = dd220efe7b1e292415bd0ea7161f63df9c95bfd3
REVISION = 0
CATEGORIES = wayland
PKGNAME = hyprland
HOMEPAGE = https://hyprland.org
ARCHIVE = Hyprland-v0.53.3.tar.gz
LINK = https://github.com/hyprwm/Hyprland/archive/v0.53.3/Hyprland-v0.53.3.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = Hyprland-0.53.3
MAKEOPT = release 

prepare:
	sed -i "s/@HASH@/${_REV}/" ${BUILDDIR}/src/version.h.in
	sed -i "s/@BRANCH@/build-lfs_musl/" ${BUILDDIR}/src/version.h.in
	sed -i "s/@TAG@/v${VERSION}/" ${BUILDDIR}/src/version.h.in
	sed -i -e '/^release:/{n;s/-D/-DCMAKE_SKIP_RPATH=ON -D/}' ${BUILDDIR}/Makefile

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
