COMMENT = Console-based MPEG Audio Player for Layers 1, 2 and 3
VERSION = 1.33.3
REVISION = 0
CATEGORIES = audio
PKGNAME = mpg123
HOMEPAGE = https://www.mpg123.org/
ARCHIVE = mpg123-1.33.3.tar.bz2
LINK = https://www.mpg123.org/download/mpg123-1.33.3.tar.bz2
SRCCD = archive
BUILD = make
BUILDDIR = mpg123-1.33.3
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--sysconfdir=/etc \
	--libdir=/usr/lib \
	--disable-dependency-tracking \
	--with-pic \
	--with-optimization=0 \
	--with-audio="alsa oss" \
	--build=x86_64-pc-linux-musl)
MAKEOPT =

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
