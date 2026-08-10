.ONESHELL:
SHELL := /bin/bash

COMMENT = Compatibility layer for Gray Streams
VERSION = 2.1.ce9adf981
_SHA = e9adf98141189123b9f26975221cbaa16f3f4f58
REVISION = 0
CATEGORIES = lisp
PKGNAME = trivial_gray_streams
_PKGNAME = trivial-gray-streams
HOMEPAGE = https://trivial-gray-streams.common-lisp.dev
ARCHIVE = ${_SHA}.tar.gz
LINK = https://github.com/trivial-gray-streams/trivial-gray-streams/archive/${ARCHIVE}
SRCCD = archive
BUILD = custom
BUILDDIR = trivial-gray-streams-${_SHA}
STRIP = no

prepare:

custom-build:
	install -vd pkg/usr/share/common-lisp/source/${_PKGNAME} \
		pkg/usr/share/common-lisp/systems
	cp -vr ${BUILDDIR}/test pkg/usr/share/common-lisp/source/${_PKGNAME}
	cp -vr ${BUILDDIR}/*.{lisp,asd} pkg/usr/share/common-lisp/source/${_PKGNAME}

	pushd pkg/usr/share/common-lisp/systems
		ln -s "../source/${_PKGNAME}/${_PKGNAME}.asd" .
		ln -s  "../source/${_PKGNAME}/${_PKGNAME}-test.asd" .
	popd

	install -vDm644 -t pkg/usr/share/doc/${_PKGNAME} ${BUILDDIR}/README
	install -vDm644 -t pkg/usr/share/licenses/${_PKGNAME} ${BUILDDIR}/COPYING

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
