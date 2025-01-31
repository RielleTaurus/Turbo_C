#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>

void main () {
	clrscr();
	char user[100], pass[100], intuser[100]="Gabrielle", intpass[100]="1108";

	do {
	cout << "Please login \n";
	cout << "Username: ";
	cin >> user;
	cout << "Password: ";
	cin >> pass;

	if (strcmp (user, intuser) == 0 && strcmp(pass, intpass) == 0) {
		cout << "Login successful. Welcome to Rielle's Selection Menu";
	}
	else {
		cout << "Login failed. Please try again \n";
	}
	getch();

	} while (! (strcmp (user, intuser) == 0 && strcmp(pass, intpass) == 0));

	clrscr();
	int choice;

	do{
	clrscr();
	gotoxy(15,4);
	cout << "+==================================================+";
	gotoxy(34,5);
	cout << "Selection Menu" << endl;
	gotoxy(18,6);
	cout << "1 - Positive or Negative" << endl;
	gotoxy(18,7);
	cout << "2 - Odd or Even" << endl;
	gotoxy(18,8);
	cout << "3 - Passed or Failed" << endl;
	gotoxy(18,9);
	cout << "4 - Total sales and Commission";
	gotoxy(18,10);
	cout << "5 - Average and Equivalent grade";
	gotoxy(18,11);
	cout << "6 - Identify the largest number";
	gotoxy(18,12);
	cout << "7 - Identify the smallest number";
	gotoxy(18,13);
	cout << "8 - Closest to 100";
	gotoxy(18,14);
	cout << "9 - Sum of two numbers and their triple value";
	gotoxy(18,15);
	cout << "10 - Multiple of 3 or 7";
	gotoxy(18,16);
	cout << "0 - exit" << endl;
	gotoxy(15,18);
	cout << "+==================================================+";
	gotoxy(18,17);
	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice) {
		case 1:
			clrscr();
			int num;

			gotoxy(17,11);
			cout << "Determine if the number is Positive or Negative";

			gotoxy (31,12);
			cout << "Enter a number: ";
			cin >> num;

			gotoxy (31,14);
			if (num > 0) {
				cout << "Number is Positive";
			}

			else {
				cout << "Number is Negative";
			}
			break;

		case 2:
			clrscr();
			int num1;
			gotoxy(19,11);
			cout << "Determine whether the number is odd or even";
			gotoxy(32,12);
			cout << "Enter a number: ";
			cin >> num1;

			gotoxy(35,14);
			if (num1 % 2 == 0) {
				cout << "Even number";
			}

			else {
				cout << "Odd number";
			}
			break;

		case 3:
			clrscr();
			float prel, midt, fina, Ave;

			gotoxy(32,7);
			cout << "Passed or Failed";

			gotoxy(30,8);
			cout << "Input prelim grade: ";
			cin >> prel;

			gotoxy(30,9);
			cout << "Input midterm grade: ";
			cin >> midt;

			gotoxy(30,10);
			cout << "Input final grade: ";
			cin >> fina;

			Ave = (prel + midt + fina)/3 ;

			gotoxy (30,12);
			cout << "Average is " << Ave << endl;

			gotoxy(30,13);
			if (Ave >= 75) {
				cout << "Grade passed";
			}

			else {
				cout << "Grade failed";
			}
			break;

		case 4:
			clrscr();
			int UP;
			char Sname[25];
			float Snum, US, TS, Com;

			gotoxy(28,8);
			cout << "Total sales and Commission";

			gotoxy(30,9);
			cout << "Salesman number: ";
			cin >> Snum;
			gotoxy(30,10);
			cout << "Salesman name: ";
			cin >> Sname;
			gotoxy(30,11);
			cout << "Unit sold: ";
			cin >> US;
			gotoxy(30,12);
			cout << "Unit price: ";
			cin >> UP;

			TS = US * UP;

			gotoxy(30,14);
			cout << "Total sales is: " << TS << endl;

			gotoxy(30,15);
			if (TS <= 10000) {
			Com = TS * 0.1;
				cout << "Commission is: " << Com;
			}

			else if (TS <= 15000) {
			Com = TS * 0.15;
				cout << "Commission is: " << Com;
			}

			else if (TS <= 20000) {
			Com = TS * 0.2;
				cout << "Commission is: " << Com;
			}

			else if (TS <= 25000) {
			Com = TS * 0.25;
				cout << "Commission is: " << Com;
			}

			else {
			Com = TS * 0.3;
				cout << "Commission is: " << Com;
			}
			break;

		case 5:
			clrscr();
			float pre, mid, fin, Average;

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


			Average = (pre + mid + fin) / 3;

			gotoxy(30,13);
			cout << "Average is: " << Average << endl;

			gotoxy(30,14);
			if (Ave >= 75) {
				cout << "Passed!" << endl;
			}

			else {
				cout << "Failed." << endl;
			}


			gotoxy(30,15);
			if (Average >= 97) {
				cout << "Equivalent grade is 1.0";
			}

			else if (Average >= 94) {
				cout << "Equivalent grade is 1.25";
			}

			else if (Average >= 91) {
				cout << "Equivalent grade is 1.50";
			}

			else if (Average >= 88) {
				cout << "Equivalent grade is 1.75";
			}

			else if (Average >= 85) {
				cout << "Equivalent grade is 2.0";
			}

			else if (Average >= 82) {
				cout << "Equivalent grade is 2.25";
			}

			else if (Average >= 79) {
				cout << "Equivalent grade is 2.50";
			}

			else if (Average >= 76) {
				cout << "Equivalent grade is 2.75";
			}

			else if (Average == 75) {
				cout << "Equivalent grade is 3.0";
			}

			else {
				cout << "Equivalent grade is 5.0";
			}
			break;

		case 6:
			clrscr();
			int x, y;

			gotoxy(28,8);
			cout << "Identify the largest number";

			gotoxy(32,9);
			cout << "Enter first number:  ";
			cin >> x;
			gotoxy(32,10);
			cout << "Enter second number: ";
			cin>> y;

			gotoxy(32,12);
			if (x > y) {
				cout << "Largest number is " << x;
			}

			else {
				cout << "Largest number is " << y;
			}
			break;

		case 7:
			clrscr();
			int x1, y1, z1;

			gotoxy(27,8);
			cout << "Identify the smallest number";

			gotoxy(30,9);
			cout << "Input first number:  ";
			cin >> x1;

			gotoxy(30,10);
			cout << "Input second number: ";
			cin >> y1;

			gotoxy(30,11);
			cout << "Input third number:  ";
			cin >> z1;

			gotoxy(31,13);
			if (x1 < y1 && x1 < z1) {
				cout << "Smallest number is " << x1;
			}

			else if (y1 < x1 && y1 < z1) {
				cout << "Smallest number is " << y1;
			}

			else {
				cout << "Smallest number is " << z1;
			}
			break;

		case 8:
			clrscr();
			int x2, y2, A, B;

			gotoxy(25,8);
			cout << "Identify which is closest to 100";

			gotoxy(30,9);
			cout << "Enter first number:  ";
			cin >> x2;
			gotoxy(30,10);
			cout << "Enter second number: ";
			cin >> y2;

			A = 100 - x2;
			B = 100 - y2;

			gotoxy(30,12);
			if (x2 == y2) {
				cout << "0";
			}

			else if (A > B) {
				cout << y2 << " is closest to 100.";
			}

			else {
				cout << x2 << " is closest to 100.";
			}
			break;

		case 9:
			clrscr();
			int val1, val2, sum, sumtrip;

			gotoxy(20,9);
			cout << "Sum of two numbers and their triple value";
			gotoxy(29,11);
			cout << "Enter first number: ";
			cin >> val1;
			gotoxy(29,12);
			cout << "Enter second number: ";
			cin >> val2;

			if (val1 == val2) {
				sum = val1 + val2;
				sumtrip = 3 * sum;
				gotoxy(25,14);
				cout << "Sum of the same number is " << sum << endl;
				gotoxy(17,15);
				cout << "The triple sum of the same inputted number is " << sumtrip << endl;
			} else {
				sum = val1 + val2;
				gotoxy(37,14);
				cout << "End";
			}
			break;

		case 10:
			clrscr();
			int num3;

			gotoxy(31,8);
			cout << " Multiple of 3 or 7 \n";
			gotoxy(32,10);
			cout << "Input a number: ";
			cin >> num3;

			gotoxy(28,11);
			if (num3 % 3 == 0) {
				cout << "Number is a multiple of 3.";
			} else if (num3 % 7 == 0) {
				cout << "Number is a multiple of 7.";
			} else {
				gotoxy(21,11);
				cout << "Number is neither a multiple of 3 nor 7.";
			}
			break;

		case 0: exit(0);

	default:
		clrscr();
		gotoxy(33,12);
		cout << "Invalid choice";
		getch();
		break;
	}
		getch();

	} while (choice < 20);
getch();
}
