#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int ctr;
	gotoxy(21,8);
	cout << "Print numbers from 5 to 1 using for loop\n" << endl;

	for (ctr=5; ctr>=1; ctr--) {
		cout.width(40);
		cout << ctr << endl;
	}

getch();
}