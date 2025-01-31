#include<iostream.h>
#include<conio.h>
#include<process.h>

void main() {

	clrscr();

	int choice, loop;
	cout << "choice: ";
	cin >> choice;

	switch (choice) {
		do {
			case 1:
				clrscr ();
				gotoxy(15,7);
				cout << "-----------------------------------------------------";
				gotoxy(15,9);
				cout << "-----------------------------------------------------";
				gotoxy(15,14);
				cout << "-----------------------------------------------------";
				gotoxy(14,8);
				cout << "|              Print Gecilie 10 times using...        |";
				gotoxy(14,10);
				cout << "|                  1 - For loop                       |";
				gotoxy(14,11);
				cout << "|                  2 - Do while loop                  |";
				gotoxy(14,12);
				cout << "|                  3 - While loop                     |";
				gotoxy(14,13);
				cout << "|                  0 - back to loop menu              |";
				gotoxy(15,16);
				cout << "=> Select which loop you want to open: ";

			switch (loop) {
				case 1:
					clrscr();
					int ctr;
					gotoxy(20,8);
					cout << "Display Gecilie 10 times using for loop \n" << endl;

					for (ctr = 1; ctr<=10; ctr++) {
					cout.width(43);
					cout << "Gecilie\n";
					}
					break;
				case 2:






			break;




		case 2:
			clrscr ();
			gotoxy(15,7);
			cout << "-----------------------------------------------------";
			gotoxy(15,9);
			cout << "-----------------------------------------------------";
			gotoxy(15,13);
			cout << "-----------------------------------------------------";
			gotoxy(14,8);
			cout << "|            Print numbers from 1 to 5 using...       |";
			gotoxy(14,10);
			cout << "|                  1 - For loop                       |";
			gotoxy(14,11);
			cout << "|                  2 - Do while loop                  |";
			gotoxy(14,12);
			cout << "|                  3 - While loop                     |";
			gotoxy(14,13);
			cout << "|                  0 - back to loop menu              |";
			gotoxy(15,16);
			cout << "=> Select which loop you want to open: ";
			break;
		case 3:
			clrscr ();
			gotoxy(15,7);
			cout << "-----------------------------------------------------";
			gotoxy(15,9);
			cout << "-----------------------------------------------------";
			gotoxy(15,13);
			cout << "-----------------------------------------------------";
			gotoxy(14,8);
			cout << "|            Print numbers from 5 to 1 using...       |";
	  		gotoxy(14,10);
			cout << "|                  1 - For loop                       |";
			gotoxy(14,11);
			cout << "|                  2 - Do while loop                  |";
			gotoxy(14,12);
			cout << "|                  3 - While loop                     |";
			gotoxy(14,13);
			cout << "|                  0 - back to loop menu              |";
			gotoxy(15,16);
			cout << "=> Select which loop you want to open: ";
			break;
		case 4:
			clrscr ();
			gotoxy(15,7);
			cout << "-----------------------------------------------------";
			gotoxy(15,9);
			cout << "-----------------------------------------------------";
			gotoxy(15,13);
			cout << "-----------------------------------------------------";
			gotoxy(14,8);
			cout << "|        Print even numbers from 5 to 1 using...      |";
			gotoxy(14,10);
			cout << "|                  1 - For loop                       |";
			gotoxy(14,11);
			cout << "|                  2 - Do while loop                  |";
			gotoxy(14,12);
			cout << "|                  3 - While loop                     |";
			gotoxy(14,13);
			cout << "|                  0 - back to loop menu              |";
			gotoxy(15,16);
			cout << "=> Select which loop you want to open: ";
			break;
		case 5:
			clrscr ();
			gotoxy(15,7);
			cout << "-----------------------------------------------------";
			gotoxy(15,9);
			cout << "-----------------------------------------------------";
			gotoxy(15,13);
			cout << "-----------------------------------------------------";
			gotoxy(14,8);
			cout << "|         Print odd numbers from 5 to 1 using...      |";
			gotoxy(14,10);
			cout << "|                  1 - For loop                       |";
			gotoxy(14,11);
			cout << "|                  2 - Do while loop                  |";
			gotoxy(14,12);
			cout << "|                  3 - While loop                     |";
			gotoxy(14,13);
			cout << "|                  0 - back to loop menu              |";
			gotoxy(15,16);
			cout << "=> Select which loop you want to open: ";
			break;
		case 6:
			clrscr ();
			gotoxy(15,7);
			cout << "-----------------------------------------------------";
			gotoxy(15,9);
			cout << "-----------------------------------------------------";
			gotoxy(15,13);
			cout << "-----------------------------------------------------";
			gotoxy(14,8);
			cout << "|     Display number if it is Prime or not using...   |";
			gotoxy(14,10);
			cout << "|                  1 - For loop                       |";
			gotoxy(14,11);
			cout << "|                  2 - Do while loop                  |";
			gotoxy(14,12);
			cout << "|                  3 - While loop                     |";
			gotoxy(14,13);
			cout << "|                  0 - back to loop menu              |";
			gotoxy(15,16);
			cout << "=> Select which loop you want to open: ";
			break;
		case 7:
			clrscr ();
			gotoxy(15,7);
			cout << "-----------------------------------------------------";
			gotoxy(15,9);
			cout << "-----------------------------------------------------";
			gotoxy(15,13);
			cout << "-----------------------------------------------------";
			gotoxy(14,8);
			cout << "|           Factorial of a given number using...      |";
			gotoxy(14,10);
			cout << "|                  1 - For loop                       |";
			gotoxy(14,11);
			cout << "|                  2 - Do while loop                  |";
			gotoxy(14,12);
			cout << "|                  3 - While loop                     |";
			gotoxy(14,13);
			cout << "|                  0 - back to loop menu              |";
			gotoxy(15,16);
			cout << "=> Select which loop you want to open: ";
			break;
		case 8:
			clrscr ();
			gotoxy(15,7);
			cout << "-----------------------------------------------------";
			gotoxy(15,9);
			cout << "-----------------------------------------------------";
			gotoxy(15,13);
			cout << "-----------------------------------------------------";
			gotoxy(14,8);
			cout << "|            GCD of two given numbers using...        |";
			gotoxy(14,10);
			cout << "|                  1 - For loop                       |";
			gotoxy(14,11);
			cout << "|                  2 - Do while loop                  |";
			gotoxy(14,12);
			cout << "|                  3 - While loop                     |";
			gotoxy(14,13);
			cout << "|                  0 - back to loop menu              |";
			gotoxy(15,16);
			cout << "=> Select which loop you want to open: ";
			break;
		case 0:
			exit(0);
	}

getch();
}