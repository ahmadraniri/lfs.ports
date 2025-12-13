COMMENT = Provides a standard for creating app stores across distributions
VERSION = 1.1.1
REVISION = 0
CATEGORIES = libs
PKGNAME = appstream
HOMEPAGE = https://distributions.freedesktop.org/wiki/AppStream
ARCHIVE = AppStream-1.1.1.tar.xz
LINK = https://www.freedesktop.org/software/appstream/releases/AppStream-1.1.1.tar.xz
SRCCD = archive
BUILD = meson
BUILDDIR = AppStream-1.1.1
BUILD_OPTION = -Dqt=false \
	-Dsystemd=false \
	-Ddocs=false \
	-Dman=false \
	-Dapidocs=false \
	-Dinstall-docs=false \
	-Dstemming=false \
	-Dvapi=false \
	-Dapt-support=false \
	-Dgir=true \
	-Dcompose=true

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
