COMMENT = Core utilities for Python3 packages
VERSION = 25.0
REVISION = 0
CATEGORIES = python
PKGNAME = pypackaging
HOMEPAGE = https://pypi.org/project/packaging
ARCHIVE = packaging-25.0.tar.gz 
LINK = https://files.pythonhosted.org/packages/source/p/packaging/packaging-25.0.tar.gz
SRCCD = archive
BUILD = custom
BUILDDIR = packaging-25.0

prepare:

custom-build:
	cd ${BUILDDIR} && python3 -m flit_core.wheel
	cd ${BUILDDIR} && PYTHONPATH=src python3 -m installer \
		--destdir "$(PWD)/pkg" dist/*.whl

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
