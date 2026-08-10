COMMENT = Unicode library for Common Lisp
VERSION = 0.1.6
REVISION = 0
CATEGORIES = lisp
PKGNAME = cl_unicode
HOMEPAGE = https://edicl.github.io/cl-unicode/
ARCHIVE = v${VERSION}.tar.gz
LINK = https://github.com/edicl/cl-unicode/archive/refs/tags/${ARCHIVE}
SRCCD = archive
BUILD = custom
BUILDDIR = cl-unicode-0.1.6
STRIP = no

prepare:
	sed \
		-n '/;;; Copyright/,/;;; SOFTWARE/p' ${BUILDDIR}/cl-unicode.asd \
		| sed -e 's/^;;; //' \
		> ${BUILDDIR}/LICENSE

custom-build:
	cd ${BUILDDIR}; sbcl --script ../generate-extra.lisp
	install -vd pkg/usr/share/common-lisp/source/${PKGNAME}
	cp -vr ${BUILDDIR}/{build,test} \
		pkg/usr/share/common-lisp/source/${PKGNAME}
	cp -vr ${BUILDDIR}/*.{lisp,asd} \
		pkg/usr/share/common-lisp/source/${PKGNAME}
	install -vDm644 -t pkg/usr/share/licenses/${PKGNAME} \
		${BUILDDIR}/LICENSE

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
