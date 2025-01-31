#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int ctr;
	gotoxy(18,8);
	cout << "Print numbers from 5 to 1 using do while loop\n" << endl;

	ctr=5;
	do {
		cout.width(40);
		cout << ctr << endl;
		ctr--;
	}
	while (ctr>=1);
getch();
}