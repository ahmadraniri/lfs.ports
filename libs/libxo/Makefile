COMMENT = Library for Generating Text, XML, JSON, and HTML Output
VERSION = 1.7.5
REVISION = 0
CATEGORIES = libs
PKGNAME = libxo
HOMEPAGE = http://juniper.github.io/libxo/libxo-manual.html
ARCHIVE = libxo-1.7.5.tar.gz
LINK = https://github.com/Juniper/libxo/releases/download/1.7.5/${ARCHIVE}
SRCCD = archive
BUILD = make
BUILDDIR = libxo-1.7.5
AUTO_CONF = (cd ${BUILDDIR} && ./configure --prefix=/usr --sysconfdir=/etc)

prepare:
	autoreconf -vif ${BUILDDIR}

custom-build:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
