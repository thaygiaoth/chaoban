AC_INIT(chaoban, 1.0, thaygiaoth@gmail.com, [], https://github.com/thaygiaoth/chaoban)

# Các script sinh ra sau khi chạy lệnh autoreconf -iv sẽ nằm trong thư mục build-aux 
AC_CONFIG_AUX_DIR([build-aux])

# Sử dụng subdir-objects khi file mã nguồn *.c chứa trong thư mục con
AM_INIT_AUTOMAKE(-Wall -Werror subdir-objects foreign)

AC_PROG_CC(gcc cc cl) 

# Nếu sử dụng automake < 1.14
AM_PROG_CC_C_O

# Cài vào /usr/bin, mặc định sẽ cài vào /usr/local/bin
# Nếu muốn đường dẫn khác thì chọn ./configure --prefix=/path
AC_PREFIX_DEFAULT(/usr)

# Tạo ra Makefile ở đường dẫn hiện tại
AC_CONFIG_FILES(Makefile)

AC_OUTPUT
