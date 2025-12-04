COMMENT = Modular status bar for somebar written in c
VERSION = git
REVISION = 0
CATEGORIES = wayland
PKGNAME = someblocks
HOMEPAGE = https://git.sr.ht/~raphi/someblocks
LINK = https://git.sr.ht/~raphi/someblock
SRCCD = git
BUILD = make
BUILDDIR = someblocks

prepare:
	cp ${BUILDDIR}/blocks.def.h ${BUILDDIR}/blocks.h
	${EDITOR} ${BUILDDIR}/blocks.h

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
