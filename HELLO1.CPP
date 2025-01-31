#include<iostream.h>
#include<conio.h>

void main() {
	clrscr();
	int x, y, A, B;
	cout << "first num: ";
	cin >> x;
	cout << "second num: ";
	cin >> y;

	if (x == y) {
		cout << "0";
	}
	if (x > 100 && y > 100) {
		A = x - 100;
		B = y - 100;
		if (A < B) {
			cout << x << " is closest to 100";
		}
		else {
			cout << y << " is closest to 100";
		}
	}
	else {
		A = 100 - x;
		B = 100 - y;
		if (A < B) {
			cout << x << " is closest to 100";
		}
		else {
			cout << y << " is closest to 100";
		}
	}

getch();
}