#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int ctr;
	gotoxy(17,8);
	cout << "Print even numbers from 5 to 1 using do while loop\n" << endl;

	ctr=5;
	do {
		if (ctr % 2 == 0) {
			cout.width(40);
			cout << ctr << endl;
		}
		ctr--;
	}
	while (ctr>=1);

getch();
}