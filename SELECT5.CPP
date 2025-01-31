#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	float pre, mid, fin, Ave;

	gotoxy(28,8);
	cout << "Average and Equivalent grade";

	gotoxy(32,9);
	cout << "Prelim:  ";
	cin >> pre;
	gotoxy(32,10);
	cout << "Midterm: ";
	cin >> mid;
	gotoxy(32,11);
	cout << "Final:   ";
	cin >> fin;


	Ave = (pre + mid + fin) / 3;

	gotoxy(30,13);
	cout << "Average is: " << Ave << endl;

	gotoxy(30,14);
	if (Ave >= 75) {
		cout << "Passed!" << endl;
	}

	else {
		cout << "Failed." << endl;
	}


	gotoxy(30,15);
	if (Ave >= 97) {
		cout << "Equivalent grade is 1.0";
	}

	else if (Ave >= 94) {
		cout << "Equivalent grade is 1.25";
	}

	else if (Ave >= 91) {
		cout << "Equivalent grade is 1.50";
	}

	else if (Ave >= 88) {
		cout << "Equivalent grade is 1.75";
	}

	else if (Ave >= 85) {
		cout << "Equivalent grade is 2.0";
	}

	else if (Ave >= 82) {
		cout << "Equivalent grade is 2.25";
	}

	else if (Ave >= 79) {
		cout << "Equivalent grade is 2.50";
	}

	else if (Ave >= 76) {
		cout << "Equivalent grade is 2.75";
	}

	else if (Ave == 75) {
		cout << "Equivalent grade is 3.0";
	}

	else {
		cout << "Equivalent grade is 5.0";
	}


	getch();

}