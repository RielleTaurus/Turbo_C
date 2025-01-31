#include<iostream.h>
#include<conio.h>

void main () {
	clrscr();
	int x, div;
	gotoxy(16,10);
	cout << "Check a number if it is Prime or not using while loop";
	gotoxy(29,12);
	cout << "Enter a positive number: ";
	cin >> x;

	div=2;
	while (x > div) {
		if (x % div ==0) {
		break;
		}
		div++;
	}
	gotoxy(30,13);
	if (x == div) {
		cout << x << " is a prime number";
	}
	else {
		cout << x << " is not a prime number";
	}

getch();
}