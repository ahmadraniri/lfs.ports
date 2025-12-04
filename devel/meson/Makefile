COMMENT =A high performance build system
VERSION =1.9.1
REVISION =0
CATEGORIES =devel
PKGNAME =meson
HOMEPAGE =https://www.mesonbuild.com
ARCHIVE =meson-${VERSION}.tar.gz
LINK =https://github.com/mesonbuild/meson/releases/download/${VERSION}/${ARCHIVE}
SRCCD =archive
BUILD =custom
BUILDDIR =meson-${VERSION}

prepare:

custom-build:
	cd ${BUILDDIR} && python3 setup.py install \
		--prefix=/usr \
		--optimize=1 \
		--root="$(PWD)/pkg"

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
