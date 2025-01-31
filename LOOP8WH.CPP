#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int x, y, ctr, gcd;

	gotoxy(21,8);
	cout << "GCD of two given numbers using while loop";
	gotoxy(29,10);
	cout << "Input first number: ";
	cin >> x;
	gotoxy(29,11);
	cout << "Input second number: ";
	cin >> y;

	ctr=1;

	while (ctr<=x && ctr<=y) {
		if (x%ctr==0 && y%ctr==0) {
			gcd=ctr;
		}
		ctr++;
	}

	gotoxy(37,12);
	cout << "GCD is " << gcd;

getch();
}