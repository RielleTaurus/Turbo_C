#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int ctr;
	gotoxy(18,8);
	cout << "Print even numbers from 5 to 1 using for loop\n" << endl;

	for (ctr=5; ctr>=1; ctr--) {
		if (ctr % 2 == 0) {
			cout.width(40);
			cout << ctr << endl;
		}
	}

getch();
}