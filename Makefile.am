## sbin_PROGRAMS neu muon cai vao /prefix/sbin
bin_PROGRAMS = chaoban

## Chi ra cac file ma nguon de bien dich, cac file cach nhau bang khoang trang
chaoban_SOURCES = src/main.c

## Giong bien dich bang gcc ... -lncurses
chaoban_LDADD = -lncurses

## Chi ra trang man de cai vao he thong
man_MANS = man/chaoban.1

## Dinh nghia cac file se xoa bang lenh make maintainer-clean
MAINTAINERCLEANFILES = Makefile.in configure aclocal.m4

## Xoa thu muc thi khai bao lenh shell nhu ben duoi
maintainer-clean-local:
	-rm -rf build-aux autom4te.cache
