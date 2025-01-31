#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>

// Banzali, Grace Gabrielle P.

void numDays() { // 1 no args no ret
	clrscr();
	float num, year, weeks, days;
	cout << "Enter number of days: ";
	cin >> num;

	year = num/365;
	weeks = num/7;
	days = num/1;

	cout << "Days to Years = " << year << endl;
	cout << "Days to Weeks = " << weeks << endl;
	cout << "Days to days = " << days << endl;
	getch();
}

void quo(int dend, int sor) { // 3 with args no ret
	int quot, rem;
	quot = dend / sor;
	rem = dend % sor;

	cout << "\nQuotient = " << quot << endl;
	cout << "Remainder = " << rem << endl;
	getch();
}

void equiGrade() { // 1 no args no ret
	float pre, mid, fin, Ave;
	cout << "Input prelim: ";
	cin >> pre;
	cout << "Input midterm: ";
	cin >> mid;
	cout << "Input finals: ";
	cin >> fin;

	Ave = (pre + mid + fin)/3;

	if(Ave >= 97) {
		cout << "Equivalent grade is 1.00";
	}
	else if(Ave >= 94) {
		cout << "Equivalent grade is 1.25";
	}
	else if(Ave >= 91) {
		cout << "Equivalent grade is 1.5";
	}
	else if(Ave >= 88) {
		cout << "Equivalent grade is 1.75";
	}
	else if(Ave >= 85) {
		cout << "Equivalent grade is 2.00";
	}
	else if(Ave >= 82) {
		cout << "Equivalent grade is 2.25";
	}
	else if(Ave >= 79) {
		cout << "Equivalent grade is 2.50";
	}
	else if(Ave >= 76) {
		cout << "Equivalent grade is 2.75";
	}
	else if(Ave == 75) {
		cout << "Equivalent grade is 3.00";
	}
	else {
		cout << "Equivalent grade is 5.00";
	}
	getch();
}

int sumDigits(int num) {
	int rem, sum=0;

	do {
		rem = num % 10;
		num = num / 10;
		sum = sum + rem;
	} while (num > 0);

	return sum;
}

/*void square(int N, int M) { // 3 with args no ret
	int ctr;
	for(ctr = M; ctr <= N; ctr--) {
		if (ctr % 2 ==1) {
			cout << ctr << " ";
		}
	}
	getch();
}*/

void main() {
	clrscr();
	char choice;
	do {
		clrscr();
		cout << "Banzali, Grace Gabrielle P.\n\n";
		cout << "Main Menu\n";
		cout << "a. Number of Days \n";
		cout << "b. Quotient and Remainder \n";
		cout << "c. \n";
		cout << "d. Equivalent grade \n";
		cout << "e. Sum of the digits of a number \n";
		cout << "f. \n";
		cout << "g. \n";
		cout << "h. \n";
		cout << "i. Exit program\n" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		switch(choice) {
			case 'a':
				clrscr();
				numDays();
				getch();
				break;
			case 'b':
				clrscr();
				int dend, sor;
				cout << "Enter dividend: ";
				cin >> dend;
				cout << "Enter divisor: ";
				cin >> sor;
				quo(dend, sor);
				getch();
				break;
			case 'c':
				break;
			case 'd':
				clrscr();
				equiGrade();
				getch();
				break;
			case 'e':
				clrscr();
				int num, sum;
				cout << "Enter num to find the sum of the digits: ";
				cin >> num;

				sum = sumDigits(num);
				cout << "Sum of the digits of a given number = " << sum;
				getch();
				break;
			case 'f':
				/*clrscr();
				int N, M, ctr;
				cout << "Enter first num: ";
				cin >> N;
				cout << "Enter second num: ";
				cin >> M;
				square(N, M);
				getch(); */
				break;
			case 'g':
				break;
			case 'h':
				break;
			case 'i':
				exit(0);
			default:
				clrscr();
				cout << "Invalid choice";
				getch();
				break;
		}

	} while (choice != 'i');
getch();
}
