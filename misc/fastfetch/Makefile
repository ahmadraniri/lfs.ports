COMMENT = Like neofetch, but much faster because written mostly in C
VERSION = 2.48.0
REVISION = 0
CATEGORIES = misc
PKGNAME = fastfetch
HOMEPAGE = https://github.com/fastfetch-cli/fastfetch
LINK = https://github.com/fastfetch-cli/fastfetch/archive/refs/tags/${VERSION}.tar.gz
ARCHIVE = ${VERSION}.tar.gz
SRCCD = archive
BUILD = cmake
BUILDDIR = fastfetch-${VERSION}
MKINST = yes
BUILD_OPTION = -DCMAKE_BUILD_TYPE=Release \
	-DENABLE_SYSTEM_YYJSON=OFF \
	-DENABLE_DIRECTX_HEADERS=OFF \
	-DIS_MUSL=ON

prepare:
	patch -p1 -d ${BUILDDIR} -i $(PWD)/fix_Qi_packages_detection_add_stow_lfs_ports.patch 

include /usr/share/mk/lfs.port.mk
