COMMENT = Google Test - C++ testing utility based on the xUnit framework (like JUnit)
VERSION = 1.18.0
REVISION = 0
CATEGORIES = libs
PKGNAME = gtest
HOMEPAGE = https://github.com/google/googletest
ARCHIVE = v${VERSION}.tar.gz
LINK = https://github.com/google/googletest/archive/refs/tags/v${VERSION}.tar.gz
SRCCD = archive
BUILD = cmake
BUILDDIR = googletest-${VERSION}
BUILD_OPTION = -DBUILD_SHARED_LIBS=ON \
	-Dgtest_build_tests=OFF \
	-DBUILD_GMOCK=ON

prepare:

post_build:
	find package -name '*.pump' -print -delete

post-install:

include /usr/share/mk/lfs.port.mk
