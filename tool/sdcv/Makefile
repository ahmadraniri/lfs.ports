COMMENT = Console version of StarDict
VERSION = 0.5.5
REVISION = 0
CATEGORIES = tool
PKGNAME = sdcv
HOMEPAGE = https://dushistov.github.io/sdcv/
ARCHIVE = v0.5.5.tar.gz
LINK = https://github.com/Dushistov/sdcv/archive/v0.5.5.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = sdcv-0.5.5
BUILD_OPTION = -DCMAKE_BUILD_TYPE=None
AUTO_CONF = (cmake -DCMAKE_INSTALL_PREFIX=/usr \
	-DCMAKE_INSTALL_LIBDIR=lib \
	-B ${BUILDDIR} -S ${BUILDDIR} ${BUILD_OPTION})
MAKEOPT = all lang

prepare:
	for i in patch/*; do patch -p1 -d ${BUILDDIR} -i $(PWD)/$$i; done

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
