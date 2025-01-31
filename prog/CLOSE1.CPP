#include<iostream.h>
#include<conio.h>

void close() {
	clrscr();
	int x, y, A, B;
	cout << "First num:   ";
	cin >> x;
	cout << "Second num:  ";
	cin>> y;

	if(x == y) {
		cout << "0";
		return;
	}
	else {
		if(x > 100 || y > 100) {
			A = x - 100;
			B = y - 100;
		}
		else {
			A = 100 - x;
			B = 100 - y;
		}
	}
		if(A < B) {
			cout << x << " is close to 100";
		}
		else {
			cout << y << " is close to 100";
		}
getch();
}

void main() {
	close();
	close();
	close();
}