COMMENT = Basic desktop integration functions
VERSION = 1.2.1
REVISION = 0
CATEGORIES = tool
PKGNAME = xdg_utils
HOMEPAGE = https://www.freedesktop.org/wiki/Software/xdg-utils/
ARCHIVE = xdg-utils-v1.2.1.tar.gz
LINK = https://gitlab.freedesktop.org/xdg/xdg-utils/-/archive/v1.2.1/xdg-utils-v1.2.1.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = xdg-utils-v1.2.1
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--sysconfdir=/etc \
	--libdir=/usr/lib \
	--build=x86_64-pc-linux-musl)
MAKEOPT = XML_CATALOG_FILES=/etc/xml/catalog

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
