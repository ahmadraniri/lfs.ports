COMMENT = The tdb library
VERSION = 1.4.14
REVISION = 0
CATEGORIES = db
PKGNAME = tdb
HOMEPAGE = https://tdb.samba.org/
ARCHIVE = tdb-1.4.14.tar.gz
LINK = https://samba.org/ftp/tdb/tdb-1.4.14.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = tdb-1.4.14
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--sysconfdir=/etc \
	--libdir=/usr/lib \
	--bundled-libraries=NONE \
	--builtin-libraries=replace \
	--disable-rpath \
	 --disable-python \
	--build=x86_64-pc-linux-musl)
MAKEOPT =
XML_CATALOG_FILES = /etc/xml/catalog
export XML_CATALOG_FILES

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
