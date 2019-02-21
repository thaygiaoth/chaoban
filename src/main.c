#include <ncurses.h>			/* ncurses.h tu dong them stdio.h */  
#include <string.h>			/* De dung cac ham getstr(), strlen(), getch() */

void main(void)
{
	char nhap[]="Nhap ten ban: ";	/* Bien luu thong bao nhap ten */
 	char hoten[40];			/* Bien luu ten nhap vao */
 	int row, col;			/* Bien luu so dong va so cot */

 	initscr();			/* Bat dau che do curses */
 	getmaxyx(stdscr, row, col);	/* Lay so dong va so cot cua man hinh terminal */


	/* In ra so dong va so cot cua terminal
 	Gia su so dong la xx, so cot la xxx hoac nguoc lai
 	chuoi 'Che do man hinh: xx dong yyy cot' co do dai 32 */
	mvprintw((row/2)-2, (col-32)/2, "Che do man hinh: %d dong %d cot", row, col);

	mvprintw(row/2, (col-32)/2, "%s", nhap);

 	getstr(hoten);

 	/* Xoa man hinh */
 	erase();

 	/* In giua man hinh dong chu Chao ban ten_ban
 	chuoi 'Chao ban ' co do dai la 9 */
 	if (row % 2 == 0)
 		mvprintw((row/2), (col-(strlen(hoten)+9))/2, "Chao ban %s", hoten);
 	else
		mvprintw((row/2)+1, (col-(strlen(hoten)+9))/2, "Chao ban %s", hoten);	

 	getch();	/* Nhan 1 phim de ket thuc chuong trinh */
 	endwin();	/* Ket thuc che do curses*/
}
