#include<iostream.h>
#include<conio.h>
#include<process.h>

void main () {
	clrscr();
	int choice, loop;

	do {
		clrscr();
		gotoxy(15,4);
		cout << "+==================================================+";
		gotoxy(15,6);
		cout << "+==================================================+";
		gotoxy(36,5);
		cout << "Loop Menu";
		gotoxy(18,7);
		cout << "1 - Print Gecilie 10 times";
		gotoxy(18,8);
		cout << "2 - Print numbers from 1 to 5";
		gotoxy(18,9);
		cout << "3 - Print numbers from 5 to 1";
		gotoxy(18,10);
		cout << "4 - Print even numbers from 5 to 1";
		gotoxy(18,11);
		cout << "5 - Print odd numbers from 5 to 1";
		gotoxy(18,12);
		cout << "6 - Check a number if it is Prime or not";
		gotoxy(18,13);
		cout << "7 - Factorial of a given number";
		gotoxy(18,14);
		cout << "8 - GCD of two given numbers using";
		gotoxy(18,15);
		cout << "0 - Exit";
		gotoxy(15,16);
		cout << "+==================================================+";
		gotoxy(15,17);
		cout << "Enter your choice: ";
		cin >> choice;	

		switch (choice) {
			case 1:
				do { 
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
					cin >> loop;
				
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

						getch();
						break;
					case 2:
						clrscr();
						int rtc;
						gotoxy(19,8);
						cout << "Display Gecilie 10 times using do while loop \n" << endl;

						rtc=1;
						do {
							cout.width(43);
							cout << "Gecilie\n";
							rtc++;
						}
						while (rtc<=10);

						getch();
						break;
					case 3: 
						clrscr();
						int trc;
						gotoxy(21,8);
						cout << "Display Gecilie 10 times using while loop \n" << endl;

						trc=1;
						while (trc<=10) {
							cout.width(43);
							cout << "Gecilie\n";
							trc++;
						}

						getch();
						break;
				}
				}
				while (loop != 3);
		}
	}
	while (choice != 1);

getch();
}
