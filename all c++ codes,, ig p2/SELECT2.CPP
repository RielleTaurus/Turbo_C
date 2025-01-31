#include<iostream.h>
#include<conio.h>

int main()
{
	clrscr();
	int x;
	gotoxy(19,11);
	cout << "Determine whether the number is odd or even";
	gotoxy(32,12);
	cout << "Enter a number: ";
	cin >> x;

	gotoxy(35,14);
	if (x % 2 == 0) {
		cout << "Even number";
	}

	else {
		cout << "Odd number";
	}
	getch();
	return 0;
}