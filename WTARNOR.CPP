#include<iostream.h>
#include<conio.h>

void square(int num) {
	int sq;
	sq = num * num;
	cout << sq;
}

void main() {
	clrscr();
	int num;
	cout << "Enter num: ";
	cin >> num;
	square(num);
	getch();
}