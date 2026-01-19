COMMENT = Archiver with multimember lzip compression (version 0.29).
VERSION = 0.29
REVISION = 0
CATEGORIES = compressors
PKGNAME = tarlz
HOMEPAGE = https://lzip.nongnu.org/tarlz.html
ARCHIVE = tarlz-0.29.tar.lz
LINK = https://download-mirror.savannah.gnu.org/releases/lzip/tarlz/tarlz-0.29.tar.lz
SRCCD = archive
BUILD = make
BUILDDIR = tarlz-0.29
BUILD_OPTION =
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--build=x86_64-pc-linux-musl)
MAKEOPT =

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
