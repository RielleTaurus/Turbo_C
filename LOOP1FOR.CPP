#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int ctr;
	gotoxy(22,8);
	cout << "Print Gecilie 10 times using for loop \n" << endl;

	for (ctr = 1; ctr<=10; ctr++) {
		cout.width(43);
		cout << "Gecilie\n";
	}

getch();
}