#include<iostream.h>
#include<conio.h>
#include<process.h>

void main() {
	clrscr();
	int choice;

	do {
		clrscr();
		cout << "1. Math operations\n" << "2. Area and Circumference\n" << "0. Exit\n";
		cout << "Enter choice: ";
		cin >> choice;

		switch(choice) {
			case 1: {
				clrscr();
				float N1, N2, sum, dif, pro, quo;
	
				gotoxy(26,9);
				cout << "Sum, Difference, Product, Quotient";
				gotoxy(20,10);
				cout <<"Enter first num: ";
				cin >>N1;
				gotoxy(20,11);
				cout <<"Enter second num: ";
				cin >>N2;	

				sum = N1 + N2;	
				dif = N1 - N2;
				pro = N1 * N2;
				float myFLOATquo = N1 / N2;
					
				gotoxy(20,13);
				cout << "The sum of " << N1 << " and " << N2 << " is: " << sum << endl;
				gotoxy(20,14);
				cout << "The difference of " << N1 << " and " << N2 << " is: " << dif << endl;
				gotoxy(20,15);
				cout << "The product of " << N1 << " and " << N2 << " is: " << pro << endl;
				gotoxy(20,16);
				cout << "The quotient of " << N1 << " and " << N2 << " is: " << myFLOATquo << endl;
				getch();
				break;
			}
			case 2: {
				clrscr();
				float Dia, Circ, A;

				gotoxy(24,9);
				cout << "Area and Circumference of a Circle";
				gotoxy(25,10);
				cout << "Input Diameter: ";
				cin >> Dia;	

				Circ = 3.1416 * Dia;
				A = 3.1416 * (Dia/2) * (Dia/2);

				gotoxy(25,12);
				cout << "The Circumference of a circle is " << Circ << endl;
				gotoxy(25,13);
				cout << "The Area of a circle is " << A;
				getch();
				break;
			}
			case 0: 
				exit(0);
			default: 
				cout << "invalid choice";
		}
	} while (choice != 0);
}