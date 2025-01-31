#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int x, y;

	gotoxy(28,8);
	cout << "Identify the largest number";

	gotoxy(32,9);
	cout << "Enter first number:  ";
	cin >> x;
	gotoxy(32,10);
	cout << "Enter second number: ";
	cin>> y;

	gotoxy(32,12);
	if (x > y) {
		cout << "Largest number is " << x;
	}

	else {
		cout << "Largest number is " << y;
	}

	getch();
}