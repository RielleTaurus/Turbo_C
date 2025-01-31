#include<iostream.h>
#include<conio.h>

void sayHello(const char* name) {
	cout << "Hello, " << name << "!";
}

void main() {
	clrscr();
	char name[100];
	gotoxy(14,12);
	cout << "=======================================================";
	gotoxy(14,15);
	cout << "=======================================================";
	gotoxy(25,13);
	cout << "What is your name? ";
	cin >> name;
	gotoxy(25,14);
	sayHello(name);
	getch();
}
	