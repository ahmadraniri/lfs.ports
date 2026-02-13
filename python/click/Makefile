COMMENT = Simple wrapper around optparse for powerful command line utilities
VERSION = 8.3.1
REVISION = 0
CATEGORIES = python
PKGNAME = click
HOMEPAGE = https://click.palletsprojects.com/
ARCHIVE = python-click-8.3.1.tar.gz
LINK = https://github.com/pallets/click/archive/8.3.1/python-click-8.3.1.tar.gz
SRCCD = archive
BUILD = custom
BUILDDIR = click-8.3.1

prepare:

custom-build:
	cd ${BUILDDIR} && python -m build --wheel --no-isolation
	cd ${BUILDDIR} && python -m installer --destdir="$(PWD)/pkg" dist/*.whl

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
