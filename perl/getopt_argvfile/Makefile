COMMENT = Interpolates script options from files into @ARGV or another array
VERSION = 1.11
REVISION = 0
CATEGORIES = perl
PKGNAME = getopt_argvfile
HOMEPAGE = https://metacpan.org/release/Getopt-ArgvFile/
ARCHIVE = Getopt-ArgvFile-${VERSION}.tar.gz
LINK = https://cpan.metacpan.org/authors/id/J/JS/JSTENZEL/Getopt-ArgvFile-${VERSION}.tar.gz
SRCCD = archive
BUILD = make
BUILDDIR = Getopt-ArgvFile-${VERSION}
MAKEOPT =
STRIP = no

prepare:
	cd ${BUILDDIR}; PERL_MM_USE_DEFAULT=1 perl Makefile.PL INSTALLDIRS=vendor

post_build:
	find package \( -name perllocal.pod -o -name .packlist \) -delete

post-install:

include /usr/share/mk/lfs.port.mk
