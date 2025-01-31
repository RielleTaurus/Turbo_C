
//Create a program that will input for the following: 1. Salesman number
// 2. Salesman name 3. Unit sold 4. Unit price. Compute and display the total
// sales which is equal to unit sold * unit price.
//Programmer: Banzali, Gab

#include<iostream.h>
#include<conio.h>

void main()                                        
{
	clrscr();
	int UP;
	char Sname[25];
	float US, TS, Snum;

	gotoxy(30,7);
	cout << "Calculate total sales";

	gotoxy(26,8);
	cout << "Input Salesman number: ";
	cin >> Snum;

	gotoxy(26,9);
	cout << "Input Salesman name: ";
	cin >> Sname;

	gotoxy(26,10);
	cout << "Input Unit Sold: ";
	cin >> US;

	gotoxy(26,11);
	cout << "Input Unit Price: ";
	cin >> UP;

	TS = US * UP;

	gotoxy(26,13);
	cout << "The total sales is: " << TS;

	getch();
}