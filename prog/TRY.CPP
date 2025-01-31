#include<iostream.h>
#include<conio.h>
#include<process.h>

void sdpq() { // 1 no args no return
	clrscr();
	float N1, N2, sum, dif, pro, quo;

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

float passfailed() { // 2 no args with return
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
	return Ave;
}

void factorial(float x) { //3 with args no return
	clrscr();
	float F=1, ctr;
	gotoxy(21,8);
	cout << "Factorial of a given number using for loop";

	for (ctr=x; ctr > 0; ctr--) {
	F=F * ctr;
	}

	gotoxy(25,11);
	cout << "The factorial of " << x << " is " << F;
	getch();
}

float grosspay(float NumHour, float RateHour	) { // 4 with args with return
	clrscr();
	float GP;

	GP = NumHour * RateHour;
	return GP;
}

void main() {
	clrscr();
	int choice;
	do {
		clrscr();
		cout << "Main Menu\n";
		cout << "1. Sequence\n";
		cout << "2. Selection\n";
		cout << "3. Loop\n";
		cout << "4. Sequence\n";
		cout << "5. Exit\n";
		cout << "Enter your choice: ";
	} 
	while (choice != 5);
		
	switch(choice) {
		case 1: 
			clrscr();
			sdpq();
			getch();
			break;
	
		case 2: 
			clrscr();
			int Ave;
			Ave = passfailed();
			gotoxy (30,12);
			cout << "Average is " << Ave << endl;

			gotoxy(30,13);
			if (Ave >= 75) {
				cout << "Grade passed";
			}
			else {
				cout << "Grade failed";
			}
			getch();
			break;

		case 3: 
			clrscr();
			float x; 
			cout << "Enter a number: ";
			cin >> x;
			factorial(x);
			getch();
			break;

		case 4: 
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
	
			GP = grosspay(NumHour, RateHour);
			gotoxy(30,14);
			cout << "Gross pay is " << GP;
			getch();
			break;	

		case 5: 
			exit(0);
		default:
			cout << "Invalid Choice";
	}
}