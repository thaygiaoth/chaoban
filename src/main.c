#include <ncurses.h>	/* ncurses.h tự động thêm stdio.h */
#include <string.h>	/* Để dùng các hàm getstr(), strlen(), getch() */

void main(void)
{
	char nhap[]="Nhap ten ban: ";	/* Biến lưu thông báo nhập tên */
 	char hoten[40];			/* Biến lưu tên nhập vào */
 	int row, col;			/* Biến lưu số dòng và số cột của màn hình terminal */

 	initscr();			/* Bắt đầu chế độ curses */
 	getmaxyx(stdscr, row, col);	/* Lấy số dòng và số cột của màn hình terminal */


	/* In ra số dòng và số cột của màn hình terminal
	Giả sử số dòng là xx, số cột là yyy hoặc ngược lại
	chuỗi 'Che do man hinh: xx dong yyy cot' có độ dài 32 */
	mvprintw((row/2)-2, (col-32)/2, "Che do man hinh: %d dong %d cot", row, col);

	mvprintw(row/2, (col-32)/2, "%s", nhap);

 	getstr(hoten);

 	/* Xóa màn hình */
 	erase();

 	/* In giữa màn hình dòng chữ Chao ban tên_bạn
 	chuỗi 'Chao ban ' có độ dài là 9 */
 	if (row % 2 == 0)
 		mvprintw((row/2), (col-(strlen(hoten)+9))/2, "Chao ban %s", hoten);
 	else
		mvprintw((row/2)+1, (col-(strlen(hoten)+9))/2, "Chao ban %s", hoten);	

 	getch();	/* Nhấn 1 phím để kết thúc chương trình */
 	endwin();	/* Kết thúc chế độ curses*/
}
