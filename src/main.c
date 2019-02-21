#include <ncurses.h>	/* ncurses.h tự động thêm stdio.h */
#include <string.h>	/* Để dùng các hàm getstr(), strlen(), getch() */

void main(void)
{
	char nhap[]="Nhap ten ban: ";	/* Biến lưu thông báo nhập tên */
 	char hoten[40];			/* Biến lưu tên nhập vào */
 	int row, col;			/* Biến lưu số dòng và số cột của màn hình terminal */

 	initscr();			/* Bắt đầu chế độ curses */
 	getmaxyx(stdscr, row, col);	/* Lấy số dòng và số cột của màn hình terminal */

	//Kiểm tra màn hình terminal có hỗ trợ màu hay không
	if (has_colors() == FALSE)
	mvprintw((row/2)-3, (col-32)/2, "Man hinh terminal cua ban khong ho tro mau sac");

	start_color();	/* Bật chế độ màu */
	//Tạo 3 index màu
	init_pair(1, COLOR_RED, COLOR_BLUE);
	init_pair(2, COLOR_YELLOW, COLOR_BLUE);
	init_pair(3, COLOR_MAGENTA, COLOR_GREEN);

	//Tạo màu index 1 cho màn hình nhập tên
	attron(COLOR_PAIR(1) | A_BOLD);

	/* In ra số dòng và số cột của màn hình terminal
	Giả sử số dòng là xx, số cột là yyy hoặc ngược lại
	chuỗi 'Che do man hinh: xx dong yyy cot' có độ dài 32 */
	mvprintw((row/2)-2, (col-32)/2, "Che do man hinh: %d dong %d cot", row, col);

	mvprintw(row/2, (col-32)/2, "%s", nhap);

	//Tắt hiệu ứng màu index 1
	attroff(COLOR_PAIR(1) | A_BOLD);

	//Tạo màu index 2 cho chữ nhập vào
	attron(COLOR_PAIR(2) | A_BOLD);

 	getstr(hoten);

	//Tắt hiệu ứng màu index 2
	attroff(COLOR_PAIR(2) | A_BOLD);

 	/* Xóa màn hình */
 	erase();
	
	//Tạo màu index 3 cho toàn bộ màn hình terminal
	wbkgd(stdscr, COLOR_PAIR(3));

	//Tạo màu cho màn hình mới, A_BLINK là chữ nhấp nháy
	attron(COLOR_PAIR(3) | A_BOLD | A_BLINK);

 	/* In giữa màn hình dòng chữ Chao ban tên_bạn
 	chuỗi 'Chao ban ' có độ dài là 9 */
 	if (row % 2 == 0)
 		mvprintw((row/2), (col-(strlen(hoten)+9))/2, "Chao ban %s", hoten);
 	else
		mvprintw((row/2)+1, (col-(strlen(hoten)+9))/2, "Chao ban %s", hoten);	

	//Tắt hiệu ứng màu
	attroff(COLOR_PAIR(3) | A_BOLD | A_BLINK);

 	getch();	/* Nhấn 1 phím để kết thúc chương trình */
 	endwin();	/* Kết thúc chế độ curses*/
}
