COMMENT = Game Boy Advance Emulator
VERSION = 0.10.5
REVISION = 0
CATEGORIES = tool
PKGNAME = mgba
HOMEPAGE = https://mgba.io
ARCHIVE = 0.10.5.tar.gz
LINK = https://github.com/mgba-emu/mgba/archive/0.10.5.tar.gz
SRCCD = archive
BUILD = cmake
BUILDDIR = mgba-0.10.5
BUILD_OPTION = -DCMAKE_POLICY_VERSION_MINIMUM=3.5 \
	-DBUILD_SHARED_LIBS=True \
	-DCMAKE_BUILD_TYPE=MinSizeRel \
	-DBUILD_TEST=OFF \
	-DBUILD_SUITE=OFF \
	-DUSE_DISCORD_RPC=OFF \
	-DUSE_EPOXY=ON \
	-DBUILD_QT=OFF \
	-DBUILD_EXAMPLE=OFF

prepare:

conf:
	cmake -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_INSTALL_LIBDIR=lib \
		-B build -S ${BUILDDIR} ${BUILD_OPTION}

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
