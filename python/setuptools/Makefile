COMMENT = Collection of enhancements to the Python3 distutils
VERSION = 80.9.0
REVISION = 0
CATEGORIES = python
PKGNAME = setuptools
HOMEPAGE = https://pypi.org/project/setuptools
ARCHIVE = v80.9.0.tar.gz
LINK = https://github.com/pypa/setuptools/archive/refs/tags/v80.9.0.tar.gz
SRCCD = archive
BUILD = custom
BUILDDIR = setuptools-80.9.0

prepare:
	rm -f ${BUILDDIR}/setuptools/*.exe

custom-build:
	cd ${BUILDDIR} && python3 setup.py build install --root="$(PWD)/pkg"

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
