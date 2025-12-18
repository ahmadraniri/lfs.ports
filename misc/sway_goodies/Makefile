COMMENT = Some (maybe) usable scripts for SwayWM.
VERSION = 0
REVISION = 0
CATEGORIES = misc
PKGNAME = sway_goodies
HOMEPAGE = https://gitlab.com/lidgnulinux/sway-goodies
LINK = https://gitlab.com/lidgnulinux/sway-goodies
SRCCD = git
BUILD = custom
BUILDDIR = sway-goodies

prepare:
	mkdir -p pkg/usr/bin
	mkdir -p pkg/usr/share/doc/sway_goodies

custom-build:
	find ${BUILDDIR}/ -type f -executable -exec install -Dm755 {} -t pkg/usr/bin \;
	cp -r ${BUILDDIR}/README.md pkg/usr/share/doc/sway_goodies/

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
