#include<iostream.h>
#include<conio.h>

int main()
{       clrscr();
	float pre, mid, fin, Ave;

	gotoxy(32,7);
	cout << "Passed or Failed";

	gotoxy(30,8);
	cout << "Input prelim grade: ";
	cin >> pre;

	gotoxy(30,9);
	cout << "Input midterm grade: ";
	cin >> mid;

	gotoxy(30,10);
	cout << "Input final grade: ";
	cin >> fin;

	Ave = (pre + mid + fin)/3 ;

	gotoxy (30,12);
	cout << "Average is " << Ave << endl;

	gotoxy(30,13);
	if (Ave >= 75) {
		cout << "Congratulations, You passed";
		cout << "You are promoted";
	}

	else {
		cout << "Failed";
		cout << "Better luck next time";
	}
		cout << "Hello";

	getch();
	return 0;

}