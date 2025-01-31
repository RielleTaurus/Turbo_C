#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int ctr;
	gotoxy(19,8);
	cout << "Print Gecilie 10 times using do while loop \n" << endl;

	ctr=1;
	do {
		cout.width(43);
		cout << "Gecilie\n";
		ctr++;
	}
	while (ctr<=10);

getch();
}