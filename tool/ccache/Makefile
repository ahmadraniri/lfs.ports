COMMENT = fast C/C++ compiler cache
VERSION = 4.13.6
REVISION = 0
CATEGORIES = tool
PKGNAME = ccache
HOMEPAGE = https://ccache.dev/
ARCHIVE = ccache-${VERSION}.tar.xz
LINK = https://github.com/ccache/ccache/releases/download/v${VERSION}/${ARCHIVE}
SRCCD = archive
BUILD = cmake
BUILDDIR = ccache-${VERSION}
BUILD_OPTION = -DCCACHE_DEV_MODE=OFF \
	-DCMAKE_BUILD_TYPE=MinSizeRel \
	-DENABLE_TESTING=OFF

prepare:

post_build:
	mkdir -p package/usr/lib/ccache/bin
	for i in cc gcc g++ cpp c++ c89 c99; do \
		ln -sf ../../../bin/ccache package/usr/lib/ccache/bin/$$i; done

post-install:

include /usr/share/mk/lfs.port.mk
