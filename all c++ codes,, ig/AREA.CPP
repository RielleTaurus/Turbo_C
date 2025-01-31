//Create a program that will input for the diameter of a circle then compute
//and display the circumference and area of a circle.
//Programmer: Banzali, Gab

#include<iostream.h>
#include<conio.h>

int main()
{
	float Dia, Circ, A;
	clrscr();

	gotoxy(24,9);
	cout << "Area and Circumference of a Circle";

	gotoxy(25,10);
	cout << "Input Diameter: ";
	cin >> Dia;

	Circ = 3.1416 * Dia;
	A = 3.1416 * (Dia/2) * (Dia/2);

	gotoxy(25,12);
	cout << "The Circumference of a circle is " << Circ << endl;
	gotoxy(25,13);
	cout << "The Area of a circle is " << A;

	getch();

	return 0;
}