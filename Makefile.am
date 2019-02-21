## sbin_PROGRAMS nếu muốn cài vào /prefix/sbin
bin_PROGRAMS = chaoban

## Chỉ ra các file mã nguồn để biên dịch, các file cách nhau bằng khoảng trắng
chaoban_SOURCES = src/main.c

## Để biên dịch bằng gcc ... -lncurses
chaoban_LDADD = -lncurses

## Chỉ ra trang man cài vào hệ thống
man_MANS = man/chaoban.1

## Định nghĩa các file sẽ xóa bằng lệnh make maintainer-clean 
MAINTAINERCLEANFILES = Makefile.in configure aclocal.m4

## Xóa thư mục thì khai báo lệnh shell và chỉ ra thư mục cần xóa như bên dưới
maintainer-clean-local:
	-rm -rf build-aux autom4te.cache
