COMMENT = development framework configuration tools
VERSION = 3.0.4
REVISION = 0
CATEGORIES = devel
PKGNAME = pkgconf
HOMEPAGE = https://gitea.treehouse.systems/ariadne/pkgconf
ARCHIVE = pkgconf-${VERSION}.tar.xz
LINK = https://distfiles.ariadne.space/pkgconf/pkgconf-${VERSION}.tar.xz
SRCCD = archive
BUILD = meson
BUILDDIR = pkgconf-${VERSION}
BUILD_OPTION = 

prepare:

post_build:
	ln -s pkgconf build/package/usr/bin/pkg-config

post-install:

include /usr/share/mk/lfs.port.mk
