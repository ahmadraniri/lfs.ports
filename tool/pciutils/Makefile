COMMENT = PCI bus configuration space access library and tools
VERSION = 3.14.0
REVISION = 0
CATEGORIES = tool
PKGNAME = pciutils
HOMEPAGE = http://mj.ucw.cz/pciutils.html
ARCHIVE = v3.14.0.tar.gz
LINK = https://github.com/pciutils/pciutils/archive/refs/tags/v3.14.0.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = pciutils-3.14.0
MAKEOPT = OPT="-fPIC -flto=auto" ZLIB=no \
	SHARED=yes \
	PREFIX=/usr \
	SHAREDIR=/usr/share/hwdata \
	MANDIR=/usr/share/man

prepare:

post_build:
	make -j4 -C ${BUILDDIR} PREFIX=${PREFIX} ${MAKEOPT} DESTDIR=${DESTDIR} install-lib
	rm -rf package/usr/sbin/update-pciids
	rm -rf package/usr/share/man/man8/update-pciids.8
	rm -rf package/usr/share/hwdata

post-install:

include /usr/share/mk/lfs.port.mk
