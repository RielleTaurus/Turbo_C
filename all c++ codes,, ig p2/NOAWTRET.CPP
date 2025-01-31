#include<iostream.h>
#include<conio.h>

int square(void) {
	clrscr();
	int num, sq;              //input
	cout << "Enter num: ";
	cin >> num;
	sq = num * num;
	return sq;
}

void main() {
	int ans;
	cout << square();
	getch();
}