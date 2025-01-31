#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	float x, F=1, ctr;
	gotoxy(21,8);
	cout << "Factorial of a given number using for loop";
	gotoxy(25,10);
	cout << "Enter a number: ";
	cin >> x;

	for (ctr=x; ctr > 0; ctr--) {
		F=F * ctr;
	}

	gotoxy(25,11);
	cout << "The factorial of " << x << " is " << F;

getch();
}
