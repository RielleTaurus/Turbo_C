#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int x, y, A, B;

	gotoxy(25,8);
	cout << "Identify which is closest to 100";

	gotoxy(30,9);
	cout << "Enter first number:  ";
	cin >> x;
	gotoxy(30,10);
	cout << "Enter second number: ";
	cin >> y;

	A = 100 - x;
	B = 100 - y;

	gotoxy(30,12);
	if (x == y) {
		cout << "0";
	}

	else if (A > B) {
		cout << y << " is closest to 100.";
	}

	else {
		cout << x << " is closest to 100.";
	}

	getch();
}