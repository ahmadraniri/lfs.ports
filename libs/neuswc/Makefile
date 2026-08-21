COMMENT = slightly less simple wayland compositor library 
VERSION = 0.cb541f39d
_SHA = b541f39d14e5c81dc35eae6af10c8d959a9c9586
REVISION = 0
CATEGORIES = libs
PKGNAME = neuswc
HOMEPAGE = https://git.sr.ht/~shrub900/neuswc
SRCCD = archive
ARCHIVE = ${_SHA}.tar.gz 
LINK = ${HOMEPAGE}/archive/${ARCHIVE}
BUILD = meson
BUILDDIR = neuswc-${_SHA}
BUILD_OPTION = -Dxwayland=enabled \
	-Dinput=libinput \
	-Dextra=true \
	-Dudev=enabled \
	-Dvideo=drm

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
