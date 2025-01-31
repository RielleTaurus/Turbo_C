#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int num3;

	gotoxy(31,8);
	cout << " Multiple of 3 or 7 \n";
	gotoxy(32,10);
	cout << "Input a number: ";
	cin >> num3;

	gotoxy(28,11);
	if (num3 % 3 == 0) {
		cout << "Number is a multiple of 3.";
	} else if (num3 % 7 == 0) {
		cout << "Number is a multiple of 7.";
	} else {
		gotoxy(21,11);
		cout << "Number is neither a multiple of 3 nor 7.";
	}

getch();
}