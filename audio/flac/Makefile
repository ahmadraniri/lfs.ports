COMMENT = A lossless audio CODEC similar to MP3.
VERSION = 1.5.0
REVISION = 0
CATEGORIES = audio
PKGNAME = flac
HOMEPAGE = https://www.xiph.org/flac/
ARCHIVE = flac-1.5.0.tar.xz
LINK = https://downloads.xiph.org/releases/flac/flac-1.5.0.tar.xz
SRCCD = archive
BUILD = cmake
BUILDDIR = flac-1.5.0
BUILD_OPTION = -DCMAKE_BUILD_TYPE=None \
	-DBUILD_TESTING=OFF \
	-DBUILD_EXAMPLES=OFF \
	-DBUILD_SHARED_LIBS=ON \
	-DNDEBUG=ON

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
