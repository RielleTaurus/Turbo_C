#include<iostream.h>
#include<conio.h>

int main()
{
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

	getch();
	return 0;
}