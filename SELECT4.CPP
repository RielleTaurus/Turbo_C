#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int UP;
	char Sname[25];
	float Snum, US, TS, Com;

	gotoxy(28,8);
	cout << "Total sales and Commission";

	gotoxy(30,9);
	cout << "Salesman number: ";
	cin >> Snum;
	gotoxy(30,10);
	cout << "Salesman name: ";
	cin >> Sname;
	gotoxy(30,11);
	cout << "Unit sold: ";
	cin >> US;
	gotoxy(30,12);
	cout << "Unit price: ";
	cin >> UP;

	TS = US * UP;

	gotoxy(30,14);
	cout << "Total sales is: " << TS << endl;

	gotoxy(30,15);
	if (TS <= 10000) {
	Com = TS * 0.1;
		cout << "Commission is: " << Com;
	}

	else if (TS <= 15000) {
	Com = TS * 0.15;
		cout << "Commission is: " << Com;
	}

	else if (TS <= 20000) {
	Com = TS * 0.2;
		cout << "Commission is: " << Com;
	}

	else if (TS <= 25000) {
	Com = TS * 0.25;
		cout << "Commission is: " << Com;
	}

	else {
	Com = TS * 0.3;
		cout << "Commission is: " << Com;
	}
	getch();
}