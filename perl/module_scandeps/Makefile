COMMENT = Recursively scan Perl code for dependencies
VERSION = 1.37
REVISION = 0
CATEGORIES = perl
PKGNAME = module_scandeps
HOMEPAGE = https://metacpan.org/release/Module-ScanDeps/
ARCHIVE = Module-ScanDeps-${VERSION}.tar.gz
LINK = https://cpan.metacpan.org/authors/id/R/RS/RSCHUPP/Module-ScanDeps-${VERSION}.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = Module-ScanDeps-${VERSION}
MAKEOPT =
STRIP = no
export CFLAGS = -D_REENTRANT -D_GNU_SOURCE -fwrapv \
	-fno-strict-aliasing -pipe -fstack-protector-strong \
	-I/usr/local/include -D_LARGEFILE_SOURCE \
	-D_FILE_OFFSET_BITS=64 -D_FORTIFY_SOURCE=2

prepare:
	cd ${BUILDDIR}; PERL_MM_USE_DEFAULT=1 perl -I. Makefile.PL \
		INSTALLDIRS=vendor \
		NO_PACKLIST=1 \
		NO_PERLLOCAL=1

post_build:

post-install:

include /usr/share/mk/lfs.port.mk
