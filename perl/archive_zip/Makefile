COMMENT = Provide a perl interface to ZIP archive files.
VERSION = 1.68
REVISION = 0
CATEGORIES = perl
PKGNAME = archive_zip
HOMEPAGE = https://metacpan.org/release/Archive-Zip
ARCHIVE = Archive-Zip-1.68.tar.gz
LINK = https://cpan.metacpan.org/authors/id/P/PH/PHRED/Archive-Zip-1.68.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = Archive-Zip-1.68
MAKEOPT =
STRIP = no
export CFLAGS = -D_REENTRANT -D_GNU_SOURCE -fwrapv \
	-fno-strict-aliasing -pipe -fstack-protector-strong \
	-I/usr/local/include -D_LARGEFILE_SOURCE \
	-D_FILE_OFFSET_BITS=64 -D_FORTIFY_SOURCE=2

prepare:
	cd ${BUILDDIR}; PERL_MM_USE_DEFAULT=1 perl Makefile.PL INSTALLDIRS=vendor

post_build:
	find package \( -name perllocal.pod -o -name .packlist \) -delete

post-install:

include /usr/share/mk/lfs.port.mk
