.ONESHELL:
SHELL := /bin/bash

COMMENT = Flexible bivalent streams for Common Lisp
VERSION = 1.0.20
REVISION = 0
CATEGORIES = lisp
PKGNAME = flexi_streams
_PKGNAME = flexi-streams
HOMEPAGE = https://edicl.github.io/flexi-streams/
ARCHIVE = v${VERSION}.tar.gz
LINK = https://github.com/edicl/flexi-streams/archive/refs/tags/${ARCHIVE}
SRCCD = archive
BUILD = custom
BUILDDIR = flexi-streams-1.0.20
STRIP = no

prepare:
	sed \
		-n '/;;; Copyright/,/;;; SOFTWARE/p' ${BUILDDIR}/flexi-streams.asd \
		| sed -e 's/;;; //' \
		> ${BUILDDIR}/LICENSE

custom-build:
	install -vd pkg/usr/share/common-lisp/source/${_PKGNAME} \
		pkg/usr/share/common-lisp/systems
	cp -vr ${BUILDDIR}/test pkg/usr/share/common-lisp/source/${_PKGNAME}
	cp -vr ${BUILDDIR}/*.{lisp,asd} pkg/usr/share/common-lisp/source/${_PKGNAME}

	pushd pkg/usr/share/common-lisp/systems
		ln -s "../source/${_PKGNAME}/${_PKGNAME}.asd" .
		ln -s  "../source/${_PKGNAME}/${_PKGNAME}-test.asd" .
	popd

	install -vDm644 -t pkg/usr/share/doc/${PKGNAME} \
		${BUILDDIR}/README.md ${BUILDDIR}/docs/index.html
	install -vDm644 -t pkg/usr/share/licenses/${PKGNAME} ${BUILDDIR}/LICENSE

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
