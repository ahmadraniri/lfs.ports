COMMENT = Netscape portable runtime functions.
VERSION = 4.38.2
REVISION = 0
CATEGORIES = net
PKGNAME = nspr
HOMEPAGE = https://www.mozilla.org/projects/nspr/about-nspr.html
ARCHIVE = nspr-4.38.2.tar.gz
LINK = https://archive.mozilla.org/pub/nspr/releases/v4.38.2/src/${ARCHIVE}
SRCCD = archive
BUILD = make
BUILDDIR = nspr-${VERSION}
BUILD_OPTION = 
MKINST = yes
AUTO_CONF = (cd ${BUILDDIR} && ./nspr/configure \
	--prefix=/usr \
	--libdir=/usr/lib \
	--disable-debug \
	--with-mozilla \
	--build="x86_64-pc-linux-musl" \
	--enable-64bit)

prepare:
	sed -i '/^RELEASE/s|^|#|' ${BUILDDIR}/nspr/pr/src/misc/Makefile.in

post_build:

include /usr/share/mk/lfs.port.mk
