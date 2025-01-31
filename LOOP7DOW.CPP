#include<iostream.h>
#include<conio.h>

void main () {
	clrscr();
	float x, F, ctr;
	gotoxy(18,8);
	cout << "Factorial of a given number using do while loop";
	gotoxy(28,10);
	cout << "Enter a number: ";
	cin >> x;

	F=1;
	ctr=x;
	do {
		F=F*ctr;
		ctr--;
	}
	while (ctr > 0);

	gotoxy(28,11);
	cout << "The factorial of " << x << " is " << F;

getch();
}