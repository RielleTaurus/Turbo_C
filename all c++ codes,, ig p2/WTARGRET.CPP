#include<iostream.h>
#include<conio.h>

int square(int num) {
	int sq;
	sq = num * num;
	return sq;
}

void main() {
	clrscr();
	int num;
	cout << "Enter num: ";
	cin >> num;
	cout << square(num);
	getch();
}
