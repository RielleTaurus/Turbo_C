#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int x, div;

	gotoxy(16,10);
	cout << "Check a number if it is Prime or not using for loop";;
	gotoxy(29,12);
	cout << "Enter a positive number: ";
	cin >> x;

	for (div=2; x > div; div++) {
		if (x % div == 0) {
		break;
		}
	}
	gotoxy(30,13);
	if (x == div) {
		cout << x << " is a prime number";
	}
	else {
		cout << x << " is not a prime number";
	}


getch();
}