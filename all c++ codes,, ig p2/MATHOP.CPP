//Create a program that will input for two numbers then compute and display
//the sum, difference, product, and quotient.
//Programmer: Banzali, Gab

#include<iostream.h>
#include<conio.h>

void main()
{
	float N1, N2, sum, dif, pro, quo;
	clrscr();

	gotoxy(26,9);
	cout << "Sum, Difference, Product, Quotient";

	gotoxy(20,10);
	cout <<"Enter first num: ";
	cin >>N1;
	gotoxy(20,11);
	cout <<"Enter second num: ";
	cin >>N2;

	sum = N1 + N2;
	dif = N1 - N2;
	pro = N1 * N2;
	float myFLOATquo = N1 / N2;

	gotoxy(20,13);
	cout << "The sum of " << N1 << " and " << N2 << " is: " << sum << endl;
	gotoxy(20,14);
	cout << "The difference of " << N1 << " and " << N2 << " is: " << dif << endl;
	gotoxy(20,15);
	cout << "The product of " << N1 << " and " << N2 << " is: " << pro << endl;
	gotoxy(20,16);
	cout << "The quotient of " << N1 << " and " << N2 << " is: " << myFLOATquo << endl;


	getch();

}
