#include<iostream.h>
#include<conio.h>

void main() {
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
getch();
}