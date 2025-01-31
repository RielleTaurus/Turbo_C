#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int x, y, z;

	gotoxy(27,8);
	cout << "Identify the smallest number";

	gotoxy(30,9);
	cout << "Input first number:  ";
	cin >> x;

	gotoxy(30,10);
	cout << "Input second number: ";
	cin >> y;

	gotoxy(30,11);
	cout << "Input third number:  ";
	cin >> z;

	gotoxy(31,13);
	if (x < y && x < z) {
		cout << "Smallest number is " << x;
	}

	else if (y < x && y < z) {
		cout << "Smallest number is " << y;
	}

	else {
		cout << "Smallest number is " << z;
	}

	getch();
}