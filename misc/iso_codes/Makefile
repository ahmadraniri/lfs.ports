COMMENT = ISO country, language, script and currency codes and translations.
VERSION = 4.19.0
COMMIT = 0f3a862394265a31d8465fc5e627d6429bbd8394 
REVISION = 0
CATEGORIES = misc
PKGNAME = iso_codes
HOMEPAGE = https://salsa.debian.org/iso-codes-team/iso-codes
ARCHIVE = iso-codes-4.19.0.tar.bz2
LINK = https://salsa.debian.org/iso-codes-team/iso-codes/-/archive/v4.19.0/iso-codes-4.19.0.tar.bz2
SRCCD = archive
BUILD = make
BUILDDIR = iso-codes-v${VERSION}-${COMMIT}
BUILD_OPTION =
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--sysconfdir=/etc \
	--libdir=/usr/lib \
	--build=x86_64-pc-linux-musl)
MAKEOPT =

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
