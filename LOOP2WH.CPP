#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int ctr;
	gotoxy(20,8);
	cout << "Print numbers from 1 to 5 using while loop\n" << endl;

	ctr=1;
	while (ctr<=5) {
		cout.width(40);
		cout << ctr <<endl;
		ctr++;
	}

getch();
}