#include<iostream.h>
#include<conio.h>

/*void main() { //for
	clrscr();
	int num;
	cout << "Enter num to check if prime or not: ";
	cin >> num;

	for(int ctr = 2; num > ctr; ctr++) {
		if (num % ctr == 0) {
			break;
		}
	}
	if (num == ctr) {
		cout << "Prime";
	}
	else {
		cout << "Not prime";
	}
	getch();
}

void main() { //do while
	clrscr();
	int num;
	cout << "Check num: ";
	cin >> num;

	int ctr=2;
	do {
		if (num % ctr == 0) {
			break;
		}
		ctr++;
	}
	while (num > ctr);
	if (num == ctr) {
		cout << "Prime";
	}
	else {
		cout << "Not prime";
	}
	getch();
} */

void main() { // while
	clrscr();
	int num;
	cout << "Check num: ";
	cin >> num;

	int ctr=2;
	while (num > ctr) {
		if (num % ctr == 0) {
			break;
		}
		ctr++;
	}
	if (num == ctr) {
		cout << "Prime";
	}
	else {
		cout << "Not prime";
	}
	getch();
}
