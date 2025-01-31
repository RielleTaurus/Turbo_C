// Create a program that initialize the variable a=5 and b=6. Swap the values
// of the two variables. Display the values of the two after swapping.
// Programmer: Banzali, Gab

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int a, b;
	a = 5;
	b = 6;

	gotoxy(27,8);
	cout << "Assigned numbers to a and b." << endl;
	gotoxy(40,9);
	cout << "a = 5 " << endl;
	gotoxy(40,10);
	cout << "b = 6 ";

	a = a + b;
	b = a - b;
	a = a - b;

	gotoxy(32,12);
	cout << "Swapped two numbers " << endl;
	gotoxy(40,13);
	cout << "a = " << a << endl;
	gotoxy(40,14);
	cout << "b = " << b;

	getch();
}

