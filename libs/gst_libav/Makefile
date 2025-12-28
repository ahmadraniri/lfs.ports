COMMENT = GStreamer streaming media framework libav plugin
VERSION = 1.26.9
REVISION = 0
CATEGORIES = libs
PKGNAME = gst_libav
HOMEPAGE = https://gstreamer.freedesktop.org
ARCHIVE = gst-libav-1.26.9.tar.xz
LINK = https://gstreamer.freedesktop.org/src/gst-libav/gst-libav-1.26.9.tar.xz
SRCCD = archive
BUILD = meson
BUILDDIR = gst-libav-1.26.9
BUILD_OPTION =

prepare:
	for i in patch/*; do patch -p1 -d ${BUILDDIR} -i $(PWD)/$$i; done

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
