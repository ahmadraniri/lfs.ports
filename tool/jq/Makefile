COMMENT = A lightweight and flexible command-line JSON processor
VERSION = 1.8.1
REVISION = 0
CATEGORIES = tool
PKGNAME = jq
HOMEPAGE = https://jqlang.github.io/jq/
ARCHIVE = jq-1.8.1.tar.gz
LINK = https://github.com/jqlang/jq/releases/download/jq-1.8.1/jq-1.8.1.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = jq-1.8.1
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--build=x86_64-pc-linux-musl \
	--prefix=/usr \
	--sysconfdir=/etc \
	--mandir=/usr/share/man \
	--localstatedir=/var \
	--disable-docs \
	--sysconfdir=/etc)

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
