#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>

/*
//Function declaration
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
		cout << "1. Addition\n";
		cout << "2. Subtraction\n";
		cout << "3. Multiplication\n";
		cout << "4. Division\n";
		cout << "5. Modulo\n";
		cout << "6. Power\n";
		cout << "0. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;
		
		if (choice != 0) {
		float a, b, c;
		clrscr();
		cout << "Enter first number: ";
		cin >> a;
		cout << "Enter second number: ";
		cin >> b;
		switch (choice) {
			case 1:
				clrscr();
				sum(a, b, c);
				cout << "\nResult: " << a << " + " << b << " = " << c;
				getch();
				break;
			case 2:
				clrscr();
				dif(a, b, c);
				cout << "\nResult: " << a << " - " << b << " = " << c;
				getch();
				break;
			case 3:
				clrscr();
				pro(a, b, c);
				cout << "\nResult: " << a << " * " << b << " = " << c;
				getch();
				break;
			case 4:
				clrscr();
				quo(a, b, c);
				gotoxy(30,15);
				cout << "\nResult: " << a << " / " << b << " = " << c;
				getch();
				break;
			case 5:
				clrscr();
				mod(a, b, c);
				cout << "\nResult: " << a << " % " << b << " = " << c;
				getch();
				break;
			case 6:
				clrscr();
				power(a, b, c);
				cout << "\nResult: " << a << " ^ " << b << " = " << c;
				getch();
				break;
			case 0:
				exit(0);
				break;
		default:
			clrscr();
			cout << "Invalid choice";
			getch();
			break;
		}
		}


	}
	while (choice != 0);
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

//Function declaration
float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
float power(float a, float b);

void main() {
		clrscr();
		float a, b, result;
		char op;
		cout << "Enter first number: ";
		cin >> a;
		cout << "Choose operator (+, -, *, /, ^): ";
		cin >> op;
		cout << "Enter second number: ";
		cin >> b;

		switch (op) {
			case '+':
				clrscr();
				result = add(a,b);
				cout << a << " + " << b << " = " << result;
				getch();
				break;
			case '-':
				clrscr();
				result = sub(a,b);
				cout << a << " - " << b << " = " << result;
				getch();
				break;
			case '*':
				clrscr();
				result = mul(a,b);
				cout << a << " * " << b << " = " << result;
				getch();
				break;
			case '/':
				clrscr();
				result = div(a,b);
				cout << a << " / " << b << " = " << result;
				getch();
				break;
			case '^':
				clrscr();
				result = power(a,b);
				cout << a << " ^ " << b << " = " << result;
				getch();
				break;
		}
}

//Function definition
float add(float a, float b) {
	return a + b;
}
float sub(float a, float b) {
	return a - b;
}
float mul(float a, float b) {
	return a * b;
}
float div(float a, float b) {
	return a / b;
}
float power(float a, float b) {
	return pow(a,b);
}

//Function declaration
float power(float a, float b);

void main() {
	clrscr();
	float a, b, result;
	cout << "Enter base: ";
	cin >> a;
	cout << "Enter exponent: ";
	cin >> b;

	result = pow(a,b);

	cout << a << "^" << b << " = " << result;
	getch();
}

float power(float a, float b) {
	return pow(a,b);
}*/

void sayHello(const char* name);

void main() {
	clrscr();
	char name[100];
	cout << "Enter name: ";
	cin >> name;
	cout << "Hello, " << name;
	getch();
}
void sayHello(char name) {
	sayHello(name);
	getch();
}