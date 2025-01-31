#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	float x, F, ctr;
	gotoxy(20,8);
	cout << "Factorial of a given number using while loop";
	gotoxy(28,10);
	cout << "Enter a number: ";
	cin >> x;

	F=1;
	ctr=x;
	while (ctr > 0) {
		F = F * ctr;
		ctr-- ;
	}

	gotoxy(28,11);
	cout << "The factorial of " << x << " is " << F;

getch();
}