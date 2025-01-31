#include<iostream.h>
#include<conio.h>

void square(void) {
	clrscr();
	int num, sq;              //input
	cout << "Enter num: ";
	cin >> num;
	sq = num * num;           //process
	cout << "Square is " << sq;    //output
	getch();
}

void main() {
	square();
	square();
}