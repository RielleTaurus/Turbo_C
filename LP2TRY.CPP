#include<iostream.h>
#include<conio.h>
#include<process.h>

void main () {
	clrscr();
	int choice, one, two, three;

	do {
	cout << "Main menu\n";
	cout << "1- Print 10 times\n";
	cout << "2- 1 to 5\n" ;
	cout << "3- 5 to 1\n";
	cout << "0 - exit\n";
	cout << "choice: ";
	cin >> choice;

		switch (choice) {
			case 1:
				do {
				clrscr();
				cout << "CASE 1 Sub menu loop\n";
				cout << "1- for\n";
				cout << "2- dow\n";
				cout << "3 - while\n";
				cout << "0 - exit\n";
				cout << "4 back to main menu\n";
				cout << "choose loop: ";
				cin >> one;

				switch (one) {
					case 1:
						clrscr();
						cout << "using loop";
						getch();
						break;
					case 2:
						clrscr();
						cout << "using do while";
						getch();
						break;
					case 3:
						clrscr();
						cout << "using while";
						getch();
						break;
					case 0:
						exit(0);
						break;
				}
				}
				while (one != 0);

			case 2:
				do {
				clrscr();
				cout << "CASE 2 Sub menu loop\n";
				cout << "1- for\n";
				cout << "2- dow\n";
				cout << "3 - while\n";
				cout << "0 - exit\n";
				cout << "4 back to main menu\n";
				cout << "choose loop: ";
				cin >> two;

					switch (two) {
					case 1:
						clrscr();
						cout << "using loop";
						getch();
						break;
					case 2:
						clrscr();
						cout << "using do while";
						getch();
						break;
					case 3:
						clrscr();
						cout << "using while";
						getch();
						break;
				}
				}
				while ( two != 0 );

		}


	}
	while (choice < 5);

getch();
}