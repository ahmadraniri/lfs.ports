COMMENT = Collection of StumpWM modules
VERSION = 0.cf9bda5dd
_SHA = f9bda5dd7c8854fc8ecd773ca6f8901650813cdf
REVISION = 0
CATEGORIES = misc
PKGNAME = stumpwm_contrib
HOMEPAGE = https://github.com/stumpwm/stumpwm-contrib
ARCHIVE = ${_SHA}.tar.gz
LINK = https://github.com/stumpwm/stumpwm-contrib/archive/${ARCHIVE}
SRCCD = archive
BUILD = custom
BUILDDIR = stumpwm-contrib-${_SHA}
STRIP = no

prepare:

custom-build:
	install -vd pkg/usr/share/stumpwm/contrib
	find ${BUILDDIR} \
		-maxdepth 1 \
		-mindepth 1 \
		-type d \
		-not -path './docs' \
		-not -path './.git' \
		-exec cp -ra {} pkg/usr/share/stumpwm/contrib \;
	install -vDm644 -t pkg/usr/share/doc/${PKGNAME} ${BUILDDIR}/README.org

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
