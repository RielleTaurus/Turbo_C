#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int ctr;
	gotoxy(20,8);
	cout << "Print numbers from 1 to 5 using do while loop\n" << endl;

	ctr=1;
	do {
		cout.width(40);
		cout << ctr << endl;
		ctr++;
	}
	while (ctr<=5);

getch();
}