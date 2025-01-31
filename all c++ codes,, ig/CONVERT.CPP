
// Create a program that will convert and display degrees Celsius to
// degrees Fahrenheit.
// Programmer: Banzali, Gab

#include<iostream.h>
#include<conio.h>

int main()
{
	clrscr();
	float DegC, DegF;

	gotoxy(25,10);
	cout << "Degrees Celsius to Degrees Fahrenheit" << endl;
	gotoxy(25,13);
	cout << "Degrees Celsius is ";
	cin >> DegC;

	DegF = (1.8 * DegC) + 32;

	gotoxy(25,15);
	cout << "Degrees Fahrenheit is " << DegF;

	getch();
	return 0;
}