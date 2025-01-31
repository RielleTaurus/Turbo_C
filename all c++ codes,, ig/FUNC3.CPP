#include<iostream.h>
#include<conio.h>
#include<math.h>

int power(float n1, float n2);

void main () {
	clrscr();
	float n1, n2, result;
	gotoxy(14,7);
	cout << "=======================================================";
	gotoxy(14,8);
	cout << "|            Calculate power of a number              |";
	gotoxy(14,9);
	cout << "=======================================================";
	gotoxy(14,10);
	cout << "Enter base: ";
	cin >> n1;
	gotoxy(14,11);
	cout << "Enter exponent: ";
	cin >> n2;
	result = power(n1,n2);
	gotoxy(14,12);
	cout << "=======================================================";
	gotoxy(18,13);
	cout << n1 << " ^ " << n2 << " = " << result;
	gotoxy(14,14);
	cout << "=======================================================";
	getch();
}

int power(float n1, float n2) {
	float result;
	result = pow(n1,n2);
	return result;
}
