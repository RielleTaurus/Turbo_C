#include<iostream.h>
#include<conio.h>
#include<process.h>

void swap(float x, float y);
void add(float x, float y);
void odd(float x);

void main() {
	clrscr();
	int choice;
	cout << "1. Swap\n" << "2. Add\n" << "3. Odd";
	cout << "Choice: ";
	cin >> choice;

	float x, y, result;
	switch(choice) {
		case 1:
			clrscr();
			swap(x,y);
			cout << "Swapped numbers: ";
			getch();
			break;
		case 2:
			clrscr();
			add(x,y);
			cout << "Sum is " << result;
			getch();
			break;
		case 3:
			clrscr();
			odd(x);
			cout << "Number is " << result;
			getch();
			break;
		case 4:
			exit(0);
	}
}

void swap(float x, float y) {
	result = x;
	x = y;
	y = result;
}
void add(float x, float y) {
	result = x + y;
}
void odd(float x) {
	if (x % 2 == 0) {
		result =
	}
}