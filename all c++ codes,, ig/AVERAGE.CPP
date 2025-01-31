//Create a program that will input for prelim, midterm, and final grade
//then compute and display.
//Programmer: Banzali, Gab

#include<iostream.h>
#include<conio.h>

int main()
{
	clrscr();
	float pre, mid, fin, Ave;

	gotoxy(30,9);
	cout << "Calculate the average";

	gotoxy(30,10);
	cout << "Enter Prelim: ";
	cin >> pre;
	gotoxy(30,11);
	cout << "Enter Midterm: ";
	cin >> mid;
	gotoxy(30,12);
	cout << "Enter Finals: ";
	cin >> fin;

	Ave = (pre + mid + fin)/3;

	gotoxy(30,14);
	cout << "The average is: " << Ave << endl;
	gotoxy(34,15);
	cout << "Well done!! ^__^ ";

	getch();

	return 0;
}
