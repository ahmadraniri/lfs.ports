COMMENT = A cross-platform process and system utilities module for Python
VERSION = 7.2.2
REVISION = 0
CATEGORIES = python
PKGNAME = psutil
HOMEPAGE = https://github.com/giampaolo/psutil
ARCHIVE = python-psutil-7.2.2.tar.gz
LINK = https://github.com/giampaolo/psutil/archive/release-7.2.2/python-psutil-7.2.2.tar.gz
SRCCD = archive
BUILD = custom
BUILDDIR = psutil-release-7.2.2

prepare:

custom-build:
	cd ${BUILDDIR} && python -m build --wheel --no-isolation
	cd ${BUILDDIR} && python -m installer --destdir="$(PWD)/pkg" dist/*.whl

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
