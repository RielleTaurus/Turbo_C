#include<iostream.h>
#include<conio.h>
#include<process.h>

void main() {
	int choice;
	do {
		clrscr();
		cout << "Main Menu\n\n";
		cout << "1. Swapping\n";
		cout << "2. Add all digits of a given number\n";
		cout << "3. Print odd numbers from 1 - 50\n";
		cout << "4. Exit\n";
		cout << "Enter your choice: ";
		cin >> choice;

		switch(choice) {
			case 1:
				clrscr();
				int a, b, c;
				cout << "Enter first num: ";
				cin >> a;
				cout << "Enter second num: ";
				cin >> b;

				c = a + b;
				a = c - a;
				b = c - b;

				cout << "\nSwapped numbers: First number is " << a << " and Second number is " << b;
				getch();
				break;

			case 2:
				clrscr();
				int num, s=0, mod;
				cout << "Enter number: ";
				cin >> num;

				while (num > 0) {
				       mod = num % 10;
				       s = s + mod;
				       num = num / 10;
				}
					cout << "Sum of the given digits is " << s;
				getch();
				break;

			case 3:
				clrscr();
				int ctr;
				for(ctr = 1; ctr <= 50; ctr++) {
					if (ctr % 2 == 1) {
						cout << ctr << endl;
					}
				}
				getch();
				break;

			case 4:
				clrscr();
				exit(0);
				getch();
				break;

			default:
				clrscr();
				cout << "Invalid choice";
				getch();
				break;
		}

	}
	while (choice != 4);
}