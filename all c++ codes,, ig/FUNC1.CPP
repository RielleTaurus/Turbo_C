#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>

void sum(float a, float b, float &c);
void dif(float a, float b, float &c);
void pro(float a, float b, float &c);
void quo(float a, float b, float &c);
void mod(float a, float b, float &c);
void power(float base, float exponent, float &c);

void main() {
	int choice;
	do {
		clrscr();
		gotoxy(14,7);
		cout << "=======================================================";
		gotoxy(14,9);
		cout << "=======================================================";
		gotoxy(14,17);
		cout << "=======================================================";
		gotoxy(14,8);
		cout << "|   Choose which type of calculation you want to do   |";
		gotoxy(14,10);
		cout << "|                  1 - Addition                       |";
		gotoxy(14,11);
		cout << "|                  2 - Subtraction                    |";
		gotoxy(14,12);
		cout << "|                  3 - Multiplication                 |";
		gotoxy(14,13);
		cout << "|                  4 - Division                       |";
		gotoxy(14,14);
		cout << "|                  5 - Modulo                         |";
   		gotoxy(14,15);
		cout << "|                  6 - Power                          |";
   		gotoxy(14,16);
		cout << "|                  0 - Exit program                   |";
		gotoxy(14,18);
		cout << "Enter your choice: ";
		cin >> choice;
		
		float a, b, c;
		switch (choice) {
			case 1:
				clrscr();
				gotoxy(30,12);
				cout << "Input for two two numbers: "; 
				gotoxy(30,13);
				cout << "First number: ";
				cin >> a;
				gotoxy(30,14);
				cout << "Second number: ";
				cin >> b;
				sum(a, b, c);
				gotoxy(30,15);
				cout << "Result: " << a << " + " << b << " = " << c;
				getch();
				break;
			case 2:
				clrscr();
				gotoxy(30,12);
				cout << "Input for two two numbers";
				gotoxy(30,13);
				cout << "First number: ";
				cin >> a;
				gotoxy(30,14);
				cout << "Second number: ";
				cin >> b;
				dif(a, b, c);
				gotoxy(30,15);
				cout << "Result: " << a << " - " << b << " = " << c;
				getch();
				break;
			case 3:
				clrscr();
				gotoxy(30,12);
				cout << "Input for two two numbers";
				gotoxy(30,13);
				cout << "First number: ";
				cin >> a;
				gotoxy(30,14);
				cout << "Second number: ";
				cin >> b;
				pro(a, b, c);
				gotoxy(30,15);
				cout << "Result: " << a << " * " << b << " = " << c;
				getch();
				break;	
			case 4:
				clrscr();
				gotoxy(30,12);
				cout << "Input for two two numbers";
				gotoxy(30,13);
				cout << "First number: ";
				cin >> a;
				gotoxy(30,14);
				cout << "Second number: ";
				cin >> b;
				quo(a, b, c);
				gotoxy(30,15);
				cout << "Result: " << a << " / " << b << " = " << c;
				getch();
				break;	
			case 5:
				clrscr();
				gotoxy(30,12);
				cout << "Input for two two numbers";
				gotoxy(30,13);
				cout << "First number: ";
				cin >> a;
				gotoxy(30,14);
				cout << "Second number: ";
				cin >> b;
				mod(a, b, c);
				gotoxy(30,15);
				cout << "Result: " << a << " % " << b << " = " << c;
				getch();
				break;	
			case 6:
				clrscr();
				gotoxy(30,12);
				cout << "Input for two two numbers";
				gotoxy(30,13);
				cout << "Input for the base: ";
				cin >> a;
				gotoxy(30,14);
				cout << "Input for the exponent: ";
				cin >> b;
				power(a, b, c);
				gotoxy(30,15);
				cout << "Result: " << a << " ^ " << b << " = " << c;
				getch();
				break;	
			case 0:
				exit(0);	
				break;	
		default:
			clrscr();
			gotoxy(33,12);
			cout << "Invalid choice";
			getch();
			break;
		}

		
	}
	while (choice  !=0);
}

void sum(float a, float b, float &c) {
	c = a + b;	
}
void dif(float a, float b, float &c) {
	c = a - b;
}
void pro(float a, float b, float &c) {
	c = a * b;
}
void quo(float a, float b, float &c) {
	if (b != 0) {
		c = a / b;
	} 
	else {
		cout << "Division by 0 is undefined";
	}
}
void mod(float a, float b, float &c) {
	if (b != 0) {
		c = fmod(a,b);
	}
	else {
		cout << "Modulo by 0 is undefined";
	}
}
void power(float base, float exponent, float &c) {
	c = pow(base, exponent);
}