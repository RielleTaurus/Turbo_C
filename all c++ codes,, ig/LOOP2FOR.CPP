#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int ctr;
	gotoxy(21,8);
	cout << "Print numbers from 1 to 5 using for loop\n" << endl;

	for (ctr=1; ctr<=5; ctr++) {
	cout.width(40);
	cout << ctr << endl;
	}

getch();
}