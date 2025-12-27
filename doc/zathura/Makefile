COMMENT = zathura - highly customizable and functional document viewer
VERSION = 0.5.14
REVISION = 0
CATEGORIES = doc
PKGNAME = zathura
HOMEPAGE = https://pwmt.org/projects/zathura/
ARCHIVE = 0.5.14.tar.gz
LINK = https://github.com/pwmt/zathura/archive/refs/tags/0.5.14.tar.gz
SRCCD = archive
BUILD = meson
BUILDDIR = zathura-0.5.14
BUILD_OPTION = -Dseccomp=enabled \
	-Dlandlock=enabled \
	-Dmanpages=disabled \
	-Dtests=disabled \
	-Dconvert-icon=disabled

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
