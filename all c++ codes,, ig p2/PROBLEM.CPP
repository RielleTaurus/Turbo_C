#include<iostream.h>
#include<conio.h>
#include<process.h>

//cube         with args with return
//square       no args with return
//print 1-10   no args no return
//print 10-1   with args no return

//loob muna ng case no function
// then convert to function

void main () {
	clrscr();
	int choice;
	do {
	clrscr();
	cout << "1. Cube of a number\n" << "2. Square of a number\n" << "3. Print numbers from 1 - 10\n" << "4. Print numbers from 10 - 1\n" << "0. Exit Program\n";
	cout << "Enter choice: ";
	cin >> choice;

	switch(choice) {
		case 1: {
			clrscr();
			int num, cube;
			cout << "Enter num: ";
			cin >> num;
			cube = num * num * num;
			cout << "Cube is " << cube;
			getch();
			break;
		}
		case 2: {
			clrscr();
			int num, sqr;
			cout << "Enter num: ";
			cin >> num;
			sqr = num * num;
			cout << "Square is " << sqr;
			getch();
			break;
		}
		case 3: {
			clrscr();
			int ctr=1;
			for(ctr=1; ctr <= 10; ctr++) {
				cout << ctr << " ";
			}
			getch();
			break;
		}
		case 4: {
			clrscr();
			int ctr=10;
			for(ctr=10; ctr >= 1; ctr--) {
				cout << ctr << " ";
			}
			getch();
			break;
		case 0:
			exit(0);
		}
	}
	} while (choice != 0);
}

