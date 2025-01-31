#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int x, y, ctr, gcd;

	gotoxy(21,8);
	cout << "GCD of two given numbers using for loop";
	gotoxy(29,10);
	cout << "Input first number: ";
	cin >> x;
	gotoxy(29,11);
	cout << "Input second number: ";
	cin >> y;

	for (ctr=1; ctr<=x && ctr<=y; ctr++) {
		if (x%ctr==0 && y%ctr==0) {
			gcd = ctr;
		}
	}
	gotoxy(37,12);
	cout << "GCD is " << gcd;

getch();
}