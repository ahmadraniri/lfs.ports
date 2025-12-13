COMMENT = Fully feature complete YAML parser and emitter
VERSION = 0.9
REVISION = 0
CATEGORIES = libs
PKGNAME = libfyaml
HOMEPAGE = https://github.com/pantoniou/libfyaml
ARCHIVE = libfyaml-0.9.tar.gz
LINK = https://github.com/pantoniou/libfyaml/releases/download/v0.9/libfyaml-0.9.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = libfyaml-0.9
AUTO_CONF = (cd ${BUILDDIR} && ./configure \
	--prefix=/usr \
	--sysconfdir=/etc \
	--libdir=/usr/lib \
	--build=x86_64-pc-linux-musl)

prepare:

custom-build:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
