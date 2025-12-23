COMMENT = High quality, one-dimensional sample-rate conversion library
VERSION = 0.1.3
REVISION = 0
CATEGORIES = libs
PKGNAME = soxr
HOMEPAGE = https://sourceforge.net/projects/soxr/
ARCHIVE = download 
LINK = https://sourceforge.net/projects/soxr/files/soxr-0.1.3-Source.tar.xz/download
SRCCD = archive
BUILD = cmake
BUILDDIR = soxr-0.1.3-Source
BUILD_OPTION = -DBUILD_SHARED_LIBS=ON \
	-DCMAKE_BUILD_TYPE=MinSizeRel \
	-DCMAKE_INSTALL_PREFIX=/usr \
	-DCMAKE_POLICY_VERSION_MINIMUM=3.5 \
	-DBUILD_TESTING=OFF

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
