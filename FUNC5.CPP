#include<iostream.h>
#include<conio.h>

float max_two(float n1, float n2);

void main() {
	clrscr();
	float n1, n2, maximum;
	gotoxy(14,7);
	cout << "=======================================================";
	gotoxy(14,9);
	cout << "=======================================================";
	gotoxy(14,13);
	cout << "=======================================================";
	gotoxy(14,8);
	cout << "|                  Which is greater?                  |";
	gotoxy(18,10);
	cout << "Enter first num: ";
	cin >> n1;
	gotoxy(18,11);
	cout << "Enter second num: ";
	cin >> n2;
	maximum = max_two(n1,n2);
	gotoxy(18,12);
	cout << maximum << " is greater";
	getch();
}

float max_two(float n1, float n2) {
	if (n1 > n2) {
		return n1;
	} 
	else {
		return n2;
	}
}
