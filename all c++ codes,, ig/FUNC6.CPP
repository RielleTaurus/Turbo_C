#include<iostream.h>
#include<conio.h>

float sum(float num) {
	if (num > 0) {
		return num + sum(num - 1);
	}
	return 0;
}

void main() {
	clrscr();
	float num;
	gotoxy(14,10);
	cout << "=======================================================";
	gotoxy(14,12);
	cout << "=======================================================";
	gotoxy(14,15);
	cout << "=======================================================";	
	gotoxy(14,11);
	cout << "|               Sum of all natural numbers            |"; 
	gotoxy(18,13);
	cout << "Input num: ";
	cin >> num;
	float result = sum(num);
	gotoxy(18,14);
	cout << "Sum = " << result;
	getch();
}