#include<iostream.h>
#include<conio.h>
#include<process.h>

void main () {
	clrscr();
	int choice, loop;

	do {
		clrscr();
		gotoxy(14,4);
		cout << "=====================================================";
		gotoxy(14,6);
		cout << "=====================================================";
		gotoxy(14,5);
		cout << "|                    Loop Menu                      |";
		gotoxy(14,7);
		cout << "|   1 - Print Gecilie 10 times                      |";
		gotoxy(14,8);
		cout << "|   2 - Print numbers from 1 to 5                   |";
		gotoxy(14,9);
		cout << "|   3 - Print numbers from 5 to 1                   |";
		gotoxy(14,10);
		cout << "|   4 - Print even numbers from 5 to 1              |";
		gotoxy(14,11);
		cout << "|   5 - Print odd numbers from 5 to 1               |";
		gotoxy(14,12);
		cout << "|   6 - Check a number if it is Prime or not        |";
		gotoxy(14,13);
		cout << "|   7 - Factorial of a given number                 |";
		gotoxy(14,14);
		cout << "|   8 - GCD of two given numbers using              |";
		gotoxy(14,15);
		cout << "|   0 - Exit program                                |";
		gotoxy(14,16);
		cout << "=====================================================";
		gotoxy(14,17);
		cout << "=> Enter your choice: ";
		cin >> choice;

		switch (choice) {
			case 1:
				do {
					clrscr ();
					gotoxy(14,7);
					cout << "=======================================================";
					gotoxy(14,9);
					cout << "=======================================================";
					gotoxy(14,15);
					cout << "=======================================================";
					gotoxy(14,8);
					cout << "|            Print Gecilie 10 times using...          |";
					gotoxy(14,10);
					cout << "|                  1 - For loop                       |";
					gotoxy(14,11);
					cout << "|                  2 - Do while loop                  |";
					gotoxy(14,12);
					cout << "|                  3 - While loop                     |";
					gotoxy(14,13);
					cout << "|                  4 - Back to loop menu              |";
					gotoxy(14,14);
					cout << "|                  0 - Exit program                   |";
					gotoxy(15,16);
					cout << "=> Select which loop you want to open: ";
					cin >> loop;

					switch (loop) {
						case 1:
							clrscr();
							int ctr;
							gotoxy(22,8);
							cout << "Print Gecilie 10 times using for loop \n" << endl;

							for (ctr = 1; ctr<=10; ctr++) {
								cout.width(43);
								cout << "Gecilie\n";
							}
							getch();
							break;
						case 2:
							clrscr();
							int ctra;
							gotoxy(19,8);
							cout << "Print Gecilie 10 times using do while loop \n" << endl;

							ctra=1;
							do {
								cout.width(43);
								cout << "Gecilie\n";
								ctra++;
							}
							while (ctra<=10);
							getch();
							break;
						case 3:
							clrscr();
							int ctrb;
							gotoxy(21,8);
							cout << "Print Gecilie 10 times using while loop \n" << endl;

							ctrb=1;
							while (ctrb<=10) {
								cout.width(43);
								cout << "Gecilie\n";
								ctrb++;
							}
							getch();
							break;
						case 4:
							break;
						case 0: 
							exit(0);
							break;
					default:
						clrscr();
						gotoxy(19,12);
						cout << "Invalid loop. Choose only from 1 to 3 choices.";
						getch();
						break;
					}
				}
				while (loop != 4);
				break;

			case 2:
				do {
					clrscr ();
					gotoxy(14,7);
					cout << "=======================================================";
					gotoxy(14,9);
					cout << "=======================================================";
					gotoxy(14,15);
					cout << "=======================================================";
					gotoxy(14,8);
					cout << "|          Print numbers from 1 to 5 using...         |";
					gotoxy(14,10);
					cout << "|                  1 - For loop                       |";
					gotoxy(14,11);
					cout << "|                  2 - Do while loop                  |";
					gotoxy(14,12);
					cout << "|                  3 - While loop                     |";
					gotoxy(14,13);
					cout << "|                  4 - Back to loop menu              |";
					gotoxy(14,14);
					cout << "|                  0 - exit                           |";
					gotoxy(15,16);
					cout << "=> Select which loop you want to open: ";
					cin >> loop;

					switch (loop) {
						case 1:
							clrscr();
							int ctr;
							gotoxy(21,8);
							cout << "Print numbers from 1 to 5 using for loop\n" << endl;

							for (ctr=1; ctr<=5; ctr++) {
								cout.width(40);
								cout << ctr << endl;
							}
							getch();
							break;
						case 2:
							clrscr();
							int ctra;
							gotoxy(20,8);
							cout << "Print numbers from 1 to 5 using do while loop\n" << endl;

							ctra=1;
							do {
								cout.width(40);
								cout << ctra << endl;
								ctra++;
							}
							while (ctra<=5);
							getch();
							break;
						case 3:
							clrscr();
							int ctrb;
							gotoxy(20,8);
							cout << "Print numbers from 1 to 5 using while loop\n" << endl;

							ctrb=1;
							while (ctrb<=5) {
								cout.width(40);
								cout << ctrb <<endl;
								ctrb++;
							}
							getch();
							break;
						case 4:
							break;
						case 0: 
							exit(0);
							break;
					default:
						clrscr();
						gotoxy(19,12);
						cout << "Invalid loop. Choose only from 1 to 3 choices.";
						getch();
						break;
					}
				}
				while (loop != 4);
				break;
			case 3:
				do {
					clrscr ();
					gotoxy(14,7);
					cout << "=======================================================";
					gotoxy(14,9);
					cout << "=======================================================";
					gotoxy(14,15);
					cout << "=======================================================";
					gotoxy(14,8);
					cout << "|          Print numbers from 5 to 1 using...         |";
					gotoxy(14,10);
					cout << "|                  1 - For loop                       |";
					gotoxy(14,11);
					cout << "|                  2 - Do while loop                  |";
					gotoxy(14,12);
					cout << "|                  3 - While loop                     |";
					gotoxy(14,13);
					cout << "|                  4 - Back to loop menu              |";
					gotoxy(14,14);
					cout << "|                  0 - exit                           |";
					gotoxy(15,16);
					cout << "=> Select which loop you want to open: ";
					cin >> loop;

					switch (loop) {
						case 1:
							clrscr();
							int ctr;
							gotoxy(21,8);
							cout << "Print numbers from 5 to 1 using for loop\n" << endl;

							for (ctr=5; ctr>=1; ctr--) {
								cout.width(40);
								cout << ctr << endl;
							}
							getch();
							break;
						case 2:
							clrscr();
							int ctra;
							gotoxy(18,8);
							cout << "Print numbers from 5 to 1 using do while loop\n" << endl;

							ctra=5;
							do {
								cout.width(40);
								cout << ctra << endl;
								ctra--;
							}
							while (ctra>=1);
							getch();
							break;
						case 3:
							clrscr();
							int ctrb;
							gotoxy(20,8);
							cout << "Print numbers from 5 to 1 using while loop\n" << endl;

							ctrb=5;
							while (ctrb>=1) {
								cout.width(40);
								cout << ctrb << endl;
								ctrb--;
							}
							getch();
							break;
						case 4:
							break;
						case 0: 
							exit(0);
							break;
					default:
						clrscr();
						gotoxy(19,12);
						cout << "Invalid loop. Choose only from 1 to 3 choices.";
						getch();
						break;
					}
				}
				while (loop != 4);
				break;
			case 4:
				do {
					clrscr ();
					gotoxy(14,7);
					cout << "=======================================================";
					gotoxy(14,9);
					cout << "=======================================================";
					gotoxy(14,15);
					cout << "=======================================================";
					gotoxy(14,8);
					cout << "|        Print even numbers from 5 to 1 using...      |";
					gotoxy(14,10);
					cout << "|                  1 - For loop                       |";
					gotoxy(14,11);
					cout << "|                  2 - Do while loop                  |";
					gotoxy(14,12);
					cout << "|                  3 - While loop                     |";
					gotoxy(14,13);
					cout << "|                  4 - Back to loop menu              |";
					gotoxy(14,14);
					cout << "|                  0 - exit                           |";
					gotoxy(15,16);
					cout << "=> Select which loop you want to open: ";
					cin >> loop;

					switch (loop) {
						case 1:
							clrscr();
							int ctr;
							gotoxy(18,8);
							cout << "Print even numbers from 5 to 1 using for loop\n" << endl;

							for (ctr=5; ctr>=1; ctr--) {
								if (ctr % 2 == 0) {
									cout.width(40);
									cout << ctr << endl;
								}
							}
							getch();
							break;
						case 2:
							clrscr();
							int ctra;
							gotoxy(17,8);
							cout << "Print even numbers from 5 to 1 using do while loop\n" << endl;

							ctra=5;
							do {
								if (ctra % 2 == 0) {
									cout.width(40);
									cout << ctra << endl;
								}
								ctra--;
							}
							while (ctra>=1);

							getch();
							break;
						case 3:
							clrscr();
							int ctrb;
							gotoxy(17,8);
							cout << "Print even numbers from 5 to 1 using while loop\n" << endl;

							ctrb=5;
							while (ctrb>=1) {
								if (ctrb % 2 == 0) {
									cout.width(40);
									cout << ctrb << endl;
								}
								ctrb--;
							}
							getch();
							break;
						case 4:
							break;
						case 0: 
							exit(0);
							break;
					default:
						clrscr();
						gotoxy(19,12);
						cout << "Invalid loop. Choose only from 1 to 3 choices.";
						getch();
						break;
					}
				}
				while (loop != 4);
			case 5:
				do {
					clrscr ();
					gotoxy(14,7);
					cout << "=======================================================";
					gotoxy(14,9);
					cout << "=======================================================";
					gotoxy(14,15);
					cout << "=======================================================";
					gotoxy(14,8);
					cout << "|         Print odd numbers from 5 to 1 using...      |";
					gotoxy(14,10);
					cout << "|                  1 - For loop                       |";
					gotoxy(14,11);
					cout << "|                  2 - Do while loop                  |";
					gotoxy(14,12);
					cout << "|                  3 - While loop                     |";
					gotoxy(14,13);
					cout << "|                  4 - Back to loop menu              |";
					gotoxy(14,14);
					cout << "|                  0 - exit                           |";
					gotoxy(15,16);
					cout << "=> Select which loop you want to open: ";
					cin >> loop;

					switch (loop) {
						case 1:
							clrscr();
							int ctr;
							gotoxy(18,8);
							cout << "Print odd numbers from 5 to 1 using for loop\n" << endl;
	
							for (ctr=5; ctr>=1; ctr--) {
								if (ctr % 2 == 1) {
									cout.width(40);
									cout << ctr << endl;
								}
							}
							getch();
							break;
						case 2:
							clrscr();
							int ctra;
							gotoxy(17,8);
							cout << "Print odd numbers from 5 to 1 using do while loop\n" << endl;

							ctra=5;
							do {
								if (ctra % 2 == 1) {
									cout.width(40);
									cout << ctra << endl;
								}
								ctra--;
							}
							while (ctra>=1);
							getch();
							break;
						case 3:
							clrscr();
							int ctrb;
							gotoxy(17,8);
							cout << "Print odd numbers from 5 to 1 using while loop\n" << endl;

							ctrb=5;
							while (ctrb>=1) {
								if (ctrb % 2 == 1) {
									cout.width(40);
									cout << ctrb << endl;
								}
								ctrb--;
							}
							getch();
							break;
						case 4:
							break;
						case 0: 
							exit(0);
							break;
					default:
						clrscr();
						gotoxy(19,12);
						cout << "Invalid loop. Choose only from 1 to 3 choices.";
						getch();
						break;
					}
				}
				while (loop != 4);
				break;
			case 6:
				do {	
					clrscr ();
					gotoxy(14,7);
					cout << "=======================================================";
					gotoxy(14,9);
					cout << "=======================================================";
					gotoxy(14,15);
					cout << "=======================================================";
					gotoxy(14,8);
					cout << "|    Check a number if it is Prime or not using...    |";
					gotoxy(14,10);
					cout << "|                  1 - For loop                       |";
					gotoxy(14,11);
					cout << "|                  2 - Do while loop                  |";
					gotoxy(14,12);
					cout << "|                  3 - While loop                     |";	
					gotoxy(14,13);
					cout << "|                  4 - Back to loop menu              |";
					gotoxy(14,14);
					cout << "|                  0 - exit                           |";
					gotoxy(15,16);
					cout << "=> Select which loop you want to open: ";
					cin >> loop;

					switch (loop) {
						case 1:
							clrscr();
							int x, div;

							gotoxy(16,10);
							cout << "Check a number if it is Prime or not using for loop";;
							gotoxy(29,12);
							cout << "Enter a positive number: ";
							cin >> x;

							for (div=2; x > div; div++) {
								if (x % div == 0) {
								break;
								}
							}
								gotoxy(30,13);
								if (x == div) {
									cout << x << " is a prime number";
								}
								else {
									cout << x << " is not a prime number";
								}
							getch();
							break;
						case 2:
							clrscr();
							int x1, div1;

							gotoxy(15,10);
							cout << "Check a number if it is Prime or not using do while loop";
							gotoxy(29,12);
							cout << "Enter a positive number: ";
							cin >> x1;

							div1=2;
							do {
								if (x1 % div1 ==0) {
								break;
								}
								div1++;
							}
							while (x1 > div1);

							gotoxy(30,13);
								if (x1 == div1) {
									cout << x1 << " is a prime number";
								}
								else {
									cout << x1 << " is not a prime number";
								}
							getch();
							break;
						case 3:
							clrscr();
							int x2, div2;
							gotoxy(16,10);
							cout << "Check a number if it is Prime or not using while loop";
							gotoxy(29,12);
							cout << "Enter a positive number: ";
							cin >> x2;

							div2=2;
							while (x2 > div2) {
								if (x2 % div2 ==0) {
								break;
								}
								div2++;
							}
							gotoxy(30,13);
								if (x2 == div2) {
									cout << x2 << " is a prime number";
								}
								else {
									cout << x2 << " is not a prime number";
								}
							getch();
							break;
						case 4:
							break;
						case 0: 
							exit(0);
							break;
					default:
						clrscr();
						gotoxy(19,12);
						cout << "Invalid loop. Choose only from 1 to 3 choices.";
						getch();
						break;
					}
				}
				while (loop != 4);
				break;
			case 7:
				do {
					clrscr ();
					gotoxy(14,7);
					cout << "=======================================================";
					gotoxy(14,9);
					cout << "=======================================================";
					gotoxy(14,15);
					cout << "=======================================================";
					gotoxy(14,8);
					cout << "|          Factorial of a given number using...       |";
					gotoxy(14,10);
					cout << "|                  1 - For loop                       |";
					gotoxy(14,11);
					cout << "|                  2 - Do while loop                  |";
					gotoxy(14,12);
					cout << "|                  3 - While loop                     |";
					gotoxy(14,13);
					cout << "|                  4 - Back to loop menu              |";
					gotoxy(14,14);
					cout << "|                  0 - exit                           |";
					gotoxy(15,16);
					cout << "=> Select which loop you want to open: ";
					cin >> loop;

					switch (loop) {
						case 1:
							clrscr();
							float x, F=1, ctr;
							gotoxy(21,8);
							cout << "Factorial of a given number using for loop";
							gotoxy(25,10);
							cout << "Enter a number: ";
							cin >> x;

							for (ctr=x; ctr > 0; ctr--) {
								F=F * ctr;
							}

							gotoxy(25,11);
							cout << "The factorial of " << x << " is " << F;
							getch();
							break;
						case 2:
							clrscr();
							float x2, Fac, ctra;
							gotoxy(18,8);
							cout << "Factorial of a given number using do while loop";
							gotoxy(28,10);
							cout << "Enter a number: ";
							cin >> x2;

							Fac=1;
							ctra=x2;
							do {
								Fac=Fac*ctra;
								ctra--;
							}
							while (ctra > 0);

							gotoxy(28,11);
							cout << "The factorial of " << x2 << " is " << Fac;
							getch();
							break;
						case 3:
							clrscr();
							float x3, Fact, ctrb;
							gotoxy(20,8);
							cout << "Factorial of a given number using while loop";
							gotoxy(28,10);
							cout << "Enter a number: ";
							cin >> x3;

							Fact=1;
							ctrb=x3;
							while (ctrb > 0) {
								Fact = Fact * ctrb;
								ctrb-- ;
							}

							gotoxy(28,11);
							cout << "The factorial of " << x3 << " is " << Fact;
							getch();
							break;
						case 4:
							break;
						case 0: 
							exit(0);
							break;
					default:
						clrscr();
						gotoxy(19,12);
						cout << "Invalid loop. Choose only from 1 to 3 choices.";
						getch();
						break;
					}
				}
				while (loop != 4);
				break;
			case 8:
				do {
					clrscr ();
					gotoxy(14,7);
					cout << "=======================================================";
					gotoxy(14,9);
					cout << "=======================================================";
					gotoxy(14,15);
					cout << "=======================================================";
					gotoxy(14,8);
					cout << "|           GCD of two given numbers using...         |";
					gotoxy(14,10);
					cout << "|                  1 - For loop                       |";
					gotoxy(14,11);
					cout << "|                  2 - Do while loop                  |";
					gotoxy(14,12);
					cout << "|                  3 - While loop                     |";
					gotoxy(14,13);
					cout << "|                  4 - Back to loop menu              |";
					gotoxy(14,14);
					cout << "|                  0 - exit                           |";
					gotoxy(15,16);
					cout << "=> Select which loop you want to open: ";
					cin >> loop;

					switch (loop) {
						case 1:
							clrscr();
							int x, y, ctr, gcd;

							gotoxy(21,8);
							cout << "GCD of two given numbers using for loop";
							gotoxy(29,10);
							cout << "Input first number: ";
							cin >> x;
							gotoxy(29,11);
							cout << "Input second number: ";
							cin >> y;

							for (ctr=1; ctr<=x && ctr<=y; ctr++) {
								if (x%ctr==0 && y%ctr==0) {
									gcd = ctr;
								}
							}
							gotoxy(37,12);
							cout << "GCD is " << gcd;
							getch();
							break;
						case 2:
							clrscr();
							int x2, y2, ctra, gcda;

							gotoxy(19,8);
							cout << "GCD of two given numbers using do while loop";
							gotoxy(29,10);
							cout << "Input first number: ";
							cin >> x2;
							gotoxy(29,11);
							cout << "Input second number: ";
							cin >> y2;

							ctra=1;
							do {
								if (x2%ctra==0 && y2%ctra==0) {
									gcda=ctra;
								}
								ctra++;
							}
							while (ctra<=x2 && ctra<=y2);

							gotoxy(37,12);
							cout << "GCD is " << gcda;
							getch();
							break;
						case 3:
							clrscr();
							int x3, y3, ctrb, gcdb;

							gotoxy(21,8);
							cout << "GCD of two given numbers using while loop";
							gotoxy(29,10);
							cout << "Input first number: ";
							cin >> x3;
							gotoxy(29,11);
							cout << "Input second number: ";
							cin >> y3;

							ctrb=1;
							while (ctrb<=x3 && ctrb<=y3) {
								if (x3%ctrb==0 && y3%ctrb==0) {
									gcdb=ctrb;
								}
								ctrb++;
							}

							gotoxy(37,12);
							cout << "GCD is " << gcdb;
							getch();
							break;
						case 4:
							break;
						case 0: 
							exit(0);
							break;
					default:
						clrscr();
						gotoxy(19,12);
						cout << "Invalid loop. Choose only from 1 to 3 choices.";
						getch();
						break;
					}
				}
				while (loop != 4);
			case 0: exit(0);
		default:
			clrscr();
			gotoxy(17,12);
			cout << "Invalid choice. Choose only from the loop menu.";
			getch();
			break;	
		}
	}
	while (choice != 0);

getch();
}