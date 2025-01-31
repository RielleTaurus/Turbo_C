// Create a program that will compute and display the square and cube of the
// number.
// Programmer: Banzali, Gab

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int x, S, C;

	gotoxy(27,8);
	cout << "Square and Cube of a number";

	gotoxy(29,9);
	cout << "Enter a number: ";
	cin >> x;

	S = x * x;
	C = x * x * x;

	gotoxy(29,11);
	cout << "Square of a number is " << S << endl;
	gotoxy(29,12);
	cout << "Cube of a number is " << C;

	getch();

}