COMMENT = Hardware information tool
VERSION = 25.5
REVISION = 0
CATEGORIES = tool
PKGNAME = hwinfo
HOMEPAGE = https://github.com/openSUSE/hwinfo
ARCHIVE = ${VERSION}.tar.gz
LINK = https://github.com/openSUSE/hwinfo/archive/${VERSION}.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = hwinfo-${VERSION}
MAKEOPT = HWINFO_VERSION=${VERSION} LIBDIR=/usr/lib

prepare:
	echo 'touch changelog' > ${BUILDDIR}/git2log
	sed -i '/linux\/fs.h/d' ${BUILDDIR}/src/hd/hd.c

post_build:
	mv package/usr/sbin package/usr/bin

post-install:

include /usr/share/mk/lfs.port.mk
