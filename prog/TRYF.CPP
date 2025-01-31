#include<iostream.h>
#include<conio.h>
#include<process.h>

int menu() {
	clrscr();	
	int choice;
	cout << "Main Menu.\n";
	cout << "1.\n";
	cout << "2.\n";
	cout << "3.\n";
	cout << "4.\n";
	cout << "5.\n";
	cout << "6.\n";
	cout << "7.\n";
	cout << "8.\n";
	cout << "0.\n";
	cout << "Enter: ";
	cin >> choice;
	return choice;
}


int submenu() {
	clrscr();
	int loop;
	cout << "Sub Menu.\n";
	cout << "1.\n";
	cout << "2.\n";
	cout << "3.\n";
	cout << "4.\n";	
	cout << "0. ";
	cin >> loop;
	return loop;
}

void main() {
	clrscr();
	int choice;
	do {
		choice = menu();
			switch(choice) {
				case 1: 
					int loop;
					do {
					loop = submenu();
						switch(loop) {
							case 1: 
								clrscr();
								cout << "FOR";
								getch();
								break;
							case 2: 
								clrscr();
								cout << "DOW";
								getch();
								break;
							case 3: 
								clrscr();
								cout << "WHILE";
								getch();
								break;
							case 4: 
								break;
							case 0: 
								exit(0);

						}
					} while (loop != 4);
					break;
			}
		} while (choice != 0);
}