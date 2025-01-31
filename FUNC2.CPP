#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<process.h>

float add(float n1, float n2);
float sub(float n1, float n2);
float mul(float n1, float n2);
float div(float n1, float n2);
float power(float n1, float n2);

int main() {
	char op;
	do {
		clrscr();
		float n1, n2, result;
		gotoxy(14,7);
		cout << "=======================================================";
		gotoxy(14,8);    
		cout << "|                     Calculator                      |";
		gotoxy(14,9);
		cout << "=======================================================";
		gotoxy(14,10);
		cout << "Enter first number: ";
		cin >> n1;
		gotoxy(14,11);
		cout << "               |   +   |     |   -   |                 ";
		gotoxy(14,12);
		cout << "               |   *   |     |   /   |                 ";
		gotoxy(14,13);
		cout << "               |   ^   |     |   0   |                 ";
		gotoxy(14,14);
		cout << "Enter operator. Press 0 to exit calculator : ";
		cin >> op;
		gotoxy(14,15);
		cout << "Enter second number: ";
		cin >> n2;
		gotoxy(14,16);
		cout << "=======================================================";
		
		switch(op) {
			case '+': 
				clrscr();
				result = add(n1,n2);
				gotoxy(14,11);
				cout << "=======================================================";
				gotoxy(14,13);
				cout << "=======================================================";
				gotoxy(18,12);
				cout << n1 << " + " << n2 << " = " << result;
				getch();
				break;
			case '-': 
				clrscr();
				result = sub(n1,n2);
				gotoxy(14,11);
				cout << "=======================================================";
				gotoxy(14,13);
				cout << "=======================================================";
				gotoxy(18,12);
				cout << n1 << " - " << n2 << " = " << result;
				getch();
				break;
			case '*': 
				clrscr();
				result = mul(n1,n2);
				gotoxy(14,11);
				cout << "=======================================================";
				gotoxy(14,13);
				cout << "=======================================================";
				gotoxy(18,12);
				cout << n1 << " * " << n2 << " = " << result;
				getch();
				break;
			case '/': 
				clrscr();
				if (n2 != 0) {
					result = div(n1,n2);
					gotoxy(14,11);
					cout << "=======================================================";
					gotoxy(14,13);
					cout << "=======================================================";
					gotoxy(18,12);
					cout << n1 << " / " << n2 << " = " << result;
				}
				else {
					gotoxy(29,12);
					cout << "Division by 0 is undefined";
				}
				getch();
				break;
			case '^': 
				clrscr();
				result = power(n1,n2);
				gotoxy(14,11);
				cout << "=======================================================";
				gotoxy(14,13);
				cout << "=======================================================";
				gotoxy(18,12);
				cout << n1 << " ^ " << n2 << " = " << result;
				getch();
				break;
			case '0':
				exit(0);
				break;
		default:
			clrscr();
			gotoxy(10,12);
			cout << "Invalid operator. Please enter a valid operator from the choices.";
			getch();
		}
	}
	while (op != '0');

return 0;
}

float add(float n1, float n2) {
	return n1 + n2;
}

float sub(float n1, float n2) {
	return n1 - n2;

}
float mul(float n1, float n2) {
	return n1 * n2;
}
float div(float n1, float n2) {
	return n1 / n2;
}
float power(float n1, float n2) {
	return pow(n1,n2);
}