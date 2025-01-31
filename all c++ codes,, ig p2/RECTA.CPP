// Create a program that will compute and display the area and perimeter
// of a rectangle.
// Programmer: Banzali, Gab

#include<iostream.h>
#include<conio.h>

int main()
{
	clrscr();
	float L, W, A, P;

	gotoxy(27,8);
	cout << "Area and Perimeter of Rectangle" << endl;

	gotoxy(27,10);
	cout << "Length of rectangle = ";
	cin >> L;
	gotoxy(27,11);
	cout << "Width of rectangle = ";
	cin >> W;

	A = L * W;
	P = 2 * (L + W);

	gotoxy(27,13);
	cout << "Area of rectangle = " << A << endl;
	gotoxy(27,14);
	cout << "Perimeter of rectangle = " << P << endl;

	getch();
	return 0;
}