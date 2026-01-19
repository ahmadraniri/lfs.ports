COMMENT = Highly customizable Wayland bar for Sway and Wlroots based compositors
VERSION = 0.14.0
REVISION = 0
CATEGORIES = wayland
PKGNAME = waybar
HOMEPAGE = https://github.com/Alexays/Waybar/
ARCHIVE = Waybar-0.14.0.tar.gz
LINK = https://github.com/Alexays/Waybar/archive/0.14.0/Waybar-0.14.0.tar.gz
SRCCD = archive
BUILD = meson
BUILDDIR = Waybar-0.14.0
BUILD_OPTION = -Ddefault_library=shared \
	-Ddbusmenu-gtk=enabled \
	-Dlibevdev=disabled \
	-Dlibnl=enabled \
	-Dlibudev=enabled \
	-Dman-pages=enabled \
	-Dmpd=disabled \
	-Dmpris=disabled \
	-Dpulseaudio=enabled \
	-Drfkill=enabled \
	-Dsndio=enabled \
	-Dsystemd=disabled \
	-Dwireplumber=disabled \
	-Dupower_glib=enabled \
	-Dtests=disabled

prepare:

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
