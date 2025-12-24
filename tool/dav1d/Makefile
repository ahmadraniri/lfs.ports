COMMENT = small and fast AV1 Decoder
VERSION = 1.5.2
REVISION = 0
CATEGORIES = tool
PKGNAME = dav1d
HOMEPAGE = https://code.videolan.org/videolan/dav1d
ARCHIVE = dav1d-1.5.2.tar.bz2
LINK = https://code.videolan.org/videolan/dav1d/-/archive/1.5.2/dav1d-1.5.2.tar.bz2
SRCCD = archive
BUILD = meson
BUILDDIR = dav1d-1.5.2
BUILD_OPTION = -Denable_tests=false \
	-Denable_tools=true \
	-Dfuzzing_engine=none \
	-Dtestdata_tests=false \
	-Denable_asm=true

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
