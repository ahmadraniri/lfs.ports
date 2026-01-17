COMMENT = Cython is an optimising static compiler for both the Python & the extended Cython programming languages.
VERSION = 3.1.6
REVISION = 0
CATEGORIES = python
PKGNAME = cython
HOMEPAGE = https://cython.org/
ARCHIVE = 3.1.6.tar.gz
LINK = https://github.com/cython/cython/archive/3.1.6.tar.gz
SRCCD = archive
BUILD = custom
BUILDDIR = cython-3.1.6

prepare:

custom-build:
	cd ${BUILDDIR} && unshare -n python3 -m build --wheel --no-isolation
	cd ${BUILDDIR} && python3 -m installer --destdir "$(PWD)/pkg" dist/*.whl

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
