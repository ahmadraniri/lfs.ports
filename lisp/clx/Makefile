COMMENT = An implementation of the X Window System protocol in Common Lisp
VERSION = 0.7.8
REVISION = 0
CATEGORIES = lisp
PKGNAME = clx
HOMEPAGE = https://github.com/sharplispers/clx
ARCHIVE = ${VERSION}.tar.gz
LINK = ${HOMEPAGE}/archive/refs/tags/${VERSION}.tar.gz
SRCCD = archive
BUILD = custom
BUILDDIR = clx-0.7.8
STRIP = no

prepare:

custom-build:
	cd ${BUILDDIR}/manual; makeinfo clx.texinfo

	install -vd pkg/usr/share/common-lisp/source/${PKGNAME}
	for i in debug demo extensions tests; do cp -vr ${BUILDDIR}/$$i \
		pkg/usr/share/common-lisp/source/${PKGNAME}; done
	cp -vr ${BUILDDIR}/*.{lisp,asd} \
		pkg/usr/share/common-lisp/source/${PKGNAME}

	install -vDm644 -t pkg/usr/share/doc/${PKGNAME} ${BUILDDIR}/README.md 
	install -vDm644 -t pkg/usr/share/info ${BUILDDIR}/manual/clx.info
	install -vDm644 -t pkg/usr/share/licenses/${PKGNAME} ${BUILDDIR}/LICENSE

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
