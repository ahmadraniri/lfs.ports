COMMENT = Userspace interface to kernel DRM services
VERSION = 2.4.130
REVISION = 0
CATEGORIES = libs
PKGNAME = libdrm
HOMEPAGE = https://cgit.freedesktop.org/mesa/drm/
ARCHIVE = libdrm-2.4.130.tar.xz
LINK = https://dri.freedesktop.org/libdrm/${ARCHIVE}
SRCCD = archive
BUILD = meson
BUILDDIR = libdrm-${VERSION}
BUILD_OPTION = --buildtype=release \
	-Dintel=enabled \
	-Dnouveau=enabled \
	-Dudev=true \
	-Dcairo-tests=disabled \
	-Dvalgrind=disabled

prepare:

post_build:

post_install:

include /usr/share/mk/lfs.port.mk
