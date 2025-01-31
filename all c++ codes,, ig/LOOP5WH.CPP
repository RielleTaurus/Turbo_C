#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int ctr;
	gotoxy(17,8);
	cout << "Print odd numbers from 5 to 1 using while loop\n" << endl;

	ctr=5;
	while (ctr>=1) {
		if (ctr % 2 == 1) {
			cout.width(40);
			cout << ctr << endl;
		}
		ctr--;
	}

getch();
}