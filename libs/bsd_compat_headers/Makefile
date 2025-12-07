COMMENT =BSD compatibility headers (cdefs, queue, tree)
VERSION =0.7.2
REVISION =0
CATEGORIES =devel
PKGNAME =bsd_compat_headers
HOMEPAGE =https://gitlab.alpinelinux.org/alpine/aports
BUILD = custom

prepare:

custom-build:
	install -Dm644 -t pkg/usr/include/sys cdefs.h queue.h tree.h

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
