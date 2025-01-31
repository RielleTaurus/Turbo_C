#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int ctr;
	gotoxy(21,8);
	cout << "Print Gecilie 10 times using while loop \n" << endl;

	ctr=1;
	while (ctr<=10) {
		cout.width(43);
		cout << "Gecilie\n";
		ctr++;
	}

getch();
}