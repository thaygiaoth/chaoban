AC_INIT(chaoban, 0.9, thaygiaoth@gmail.com)

# Cac script sinh ra khi chay lenh autoreconf -iv se nam trong thu muc build-aux 
AC_CONFIG_AUX_DIR([build-aux])

# subdir-objects de biet cac file ma nguon chua trong thu muc nao do
AM_INIT_AUTOMAKE(-Wall -Werror subdir-objects foreign)

AC_PROG_CC(gcc cc cl) 

# Neu su dung automake < 1.14
AM_PROG_CC_C_O

# Cai dat vao /usr/bin, mac dinh se cai vao /usr/local/bin
# Neu muon duong dan khac thi chon ./configure --prefix=/path
AC_PREFIX_DEFAULT(/usr)

AC_CONFIG_FILES(Makefile)

AC_OUTPUT
