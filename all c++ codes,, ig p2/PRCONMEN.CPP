#include<iostream.h>
#include<conio.h>
#include<process.h>

void main() {
	clrscr();
	int choice;
	gotoxy(14,7);
	cout << "=======================================================";
	gotoxy(14,9);
	cout << "=======================================================";
	gotoxy(14,14);
	cout << "=======================================================";
	gotoxy(14,8);
	cout << "|          Programming Constructs Main Menu           |";
	gotoxy(14,10);
	cout << "|                  1 - Sequence                       |";
	gotoxy(14,11);
	cout << "|                  2 - Selection                      |";
	gotoxy(14,12);
	cout << "|                  3 - Loop/Iteration                 |";
	gotoxy(14,13);
	cout << "|                  0 - Exit program                   |";
	gotoxy(14,15);
	cout << "Enter your choice: ";
	cin >> choice;

	switch(choice);
		case 1:
			do{
				clrscr();
				gotoxy(15,4);
				cout << "+==================================================+";
				gotoxy(34,5);
				cout << "Sequence Menu" << endl;
				gotoxy(18,6);
				cout << "1 - Hello World" << endl;
				gotoxy(18,7);
				cout << "2 - Math Op" << endl;
				gotoxy(18,8);
				cout << "3 - Print names 5 times" << endl;
				gotoxy(18,9);
				cout << "4 - Area and Circumference of a circle";
				gotoxy(18,10);
				cout << "5 - Calculate average grade";
				gotoxy(18,11);
				cout << "6 - Total Sales";
				gotoxy(18,12);
				cout << "7 - Swap two numbers";
				gotoxy(18,13);
				cout << "8 - Square and Cube of a number";
				gotoxy(18,14);
				cout << "9 - Gross Pay";
				gotoxy(18,15);
				cout << "10 - Celcius to Fahrenheit";
				gotoxy(18,16);
				cout << "11 - Area and Perimeter of a Rectangle";
				gotoxy(18,17);
				cout << "0 - exit" << endl;
				gotoxy(15,19);
				cout << "+==================================================+";
				gotoxy(18,18);
				cout << "Enter your choice: ";
				cin >> choice;





getch();
}