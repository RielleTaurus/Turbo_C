// Create a program that will input for the following: a. Employee nuumber
// b. employee name c. No. of hours worked d. Rate per hour. Compute and
// display the gross pay = no. of hours worked * rate per hour.
// Programmer: Banzali, Gab

#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	char Ename[25];
	float NumHour, RateHour, Enum, GP;

	gotoxy(34,8);
	cout << "Gross pay";

	gotoxy(30,9);
	cout << "Employee number: ";
	cin >> Enum;
	gotoxy(30,10);
	cout << "Employee name: ";
	cin >> Ename;
	gotoxy(30,11);
	cout << "Number of hours worked: ";
	cin >> NumHour;
	gotoxy(30,12);
	cout << "Rate per hour: ";
	cin >> RateHour;

	GP = NumHour * RateHour;

	gotoxy(30,14);
	cout << "Gross pay is " << GP;

	getch();

}