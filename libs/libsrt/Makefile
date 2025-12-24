COMMENT = Secure Reliable Transport (SRT)
VERSION = 1.5.4
REVISION = 0
CATEGORIES = libs
PKGNAME = libsrt
HOMEPAGE = https://www.srtalliance.org/
ARCHIVE = v1.5.4.tar.gz
LINK = https://github.com/Haivision/srt/archive/v1.5.4.tar.gz
SRCCD = archive
BUILD = cmake
BUILDDIR = srt-1.5.4
BUILD_OPTION = -DCMAKE_BUILD_TYPE=MinSizeRel \
	-DCMAKE_POLICY_VERSION_MINIMUM=3.5 \
	-DENABLE_UNITTESTS="OFF" \
	-DENABLE_TESTING="OFF" \
	-DENABLE_STATIC=OFF

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
