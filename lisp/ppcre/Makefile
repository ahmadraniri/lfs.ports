COMMENT = Perl-compatible portable regexp library for Common Lisp
VERSION = 2.1.2
REVISION = 0
CATEGORIES = lisp
PKGNAME = ppcre
HOMEPAGE = https://edicl.github.io/cl-ppcre/
ARCHIVE = v${VERSION}.tar.gz
LINK = https://github.com/edicl/cl-ppcre/archive/refs/tags/${ARCHIVE}
SRCCD = archive
BUILD = custom
BUILDDIR = cl-ppcre-2.1.2
STRIP = no

prepare:

custom-build:
	install -vd pkg/usr/share/common-lisp/source/${PKGNAME}
	cp -vr ${BUILDDIR}/{test,cl-ppcre-unicode} \
		pkg/usr/share/common-lisp/source/${PKGNAME}
	cp -vr ${BUILDDIR}/*.{lisp,asd} \
		pkg/usr/share/common-lisp/source/${PKGNAME}

	install -vDm644 -t pkg/usr/share/doc/${PKGNAME} \
		${BUILDDIR}/README.md ${BUILDDIR}/docs/index.html
	install -vDm644 -t pkg/usr/share/licenses/${PKGNAME} \
		${BUILDDIR}/LICENSE

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
