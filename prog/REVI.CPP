#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>

void login() {
	clrscr();
	char user[100] = "Gabrielle", pass[100] = "1108", intuser[100], intpass[100];
	int attempts = 0;
	const int maxAttempts = 3;

	do {
		cout << "Please login\n";
		cout << "Username: ";
		cin >> intuser;
		cout << "Password: ";

		char ch;
		int i = 0;
		while ((ch = getch()) != 13) {
			intpass[i++] = ch;
			cout << '*';
		}
		intpass[i] = '\0';

		if (strcmp(user, intuser) == 0 && strcmp(pass, intpass) == 0) {
			cout << "\nLogin successful. Welcome to Rielle's Programming Constructs Menu";
			break;
		}
		else {
			cout << "\nLogin failed.\n" << endl;
			attempts++;

			if (attempts >= maxAttempts) {
				cout << "Too many unsuccessful attempts. Exiting program.";
				getch();
				exit(0); 
			}
		}
		getch();
	} while (1);
}

void main() {
	login();	
	
	clrscr();
	int choice;
	do {
		clrscr();
		gotoxy(14,7);
		cout << "=======================================================";
		gotoxy(14,9);
		cout << "=======================================================";
		gotoxy(14,14);
		cout << "=======================================================";
		gotoxy(14,8);
		cout << "|          Programming Constructs Main Menu           |";
		gotoxy(14,10);
		cout << "|                  1 - Sequence                       |";
		gotoxy(14,11);
		cout << "|                  2 - Selection                      |";
		gotoxy(14,12);
		cout << "|                  3 - Loop/Iteration                 |";
		gotoxy(14,13);
		cout << "|                  0 - Exit program                   |";
		gotoxy(14,15);
		cout << "Enter your choice: ";
		cin >> choice;
	
		switch(choice) {
			case 1: 
				int seqchoice;
					do {
						clrscr();
						gotoxy(14,4);
						cout << "=====================================================";
						gotoxy(14,6);
						cout << "=====================================================";
						gotoxy(14,5);
						cout << "|                    Sequence Menu                  |";
						gotoxy(14,7);
						cout << "|   1 - Hello World                                 |";
						gotoxy(14,8);
						cout << "|   2 - Math Op                                     |";
						gotoxy(14,9);
						cout << "|   3 - Print name 5 times                          |";
						gotoxy(14,10);
						cout << "|   4 - Area and Circumference of a circle          |";
						gotoxy(14,11);
						cout << "|   5 - Calculate average grade                     |";
						gotoxy(14,12);
						cout << "|   6 - Total Sales                                 |";
						gotoxy(14,13);
						cout << "|   7 - Swap two numbers                            |";
						gotoxy(14,14);
						cout << "|   8 - Square and Cube of a number                 |";
						gotoxy(14,15);
						cout << "|   9 - Gross Pay                                   |";
						gotoxy(14,16);
						cout << "|   10 - Celcius to Fahrenheit                      |";
						gotoxy(14,17);
						cout << "|   11 - Area and Perimeter of a Rectangle          |";
						gotoxy(14,18);
						cout << "|   12 - Back to programming constructs             |";
						gotoxy(14,19);
						cout << "|   0 - Exit program                                |";
						gotoxy(14,20);
						cout << "=====================================================";
						gotoxy(14,21);
						cout << "=> Enter your choice: ";
						cin >> seqchoice;

							switch(seqchoice) {
								case 1: 
									clrscr();
									gotoxy(35,12);
									textcolor(1+128);
										cprintf("H");
									gotoxy(36,12);
									textcolor(2+128);
										cprintf("E");
									gotoxy(37,12);
									textcolor(5+128);
										cprintf("L");
									gotoxy(38,12);
									textcolor(8+128);
										cprintf("L");
									gotoxy(39,12);
									textcolor(6+128);
										cprintf("O");
									gotoxy(41,12);
									textcolor(3+128);
										cprintf("W");
									gotoxy(42,12);
									textcolor(4+128);
										cprintf("O");
									gotoxy(43,12);
									textcolor(9+128);
										cprintf("R");
									gotoxy(44,12);
									textcolor(14+128);
										cprintf("L");
									gotoxy(45,12);
									textcolor(10+128);
										cprintf("D");
									gotoxy(46,12);
									textcolor(12+128);
										cprintf("!");
									gotoxy(38,13);
									textcolor(WHITE);
										cprintf("Gabby");
									getch();
									break;
								case 2: 
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
								case 3: 
									clrscr();
									gotoxy(27,9);
									cout << "Grace Gabrielle P. Banzali" << endl;
									gotoxy(27,10);
									cout << "Grace Gabrielle P. Banzali" << endl;
									gotoxy(27,11);
									cout << "Grace Gabrielle P. Banzali" << endl;
									gotoxy(27,12);
									cout << "Grace Gabrielle P. Banzali" << endl;
									gotoxy(27,13);
									cout << "Grace Gabrielle P. Banzali" << endl;
									getch();
									break;
								case 4: 
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
								case 5: 
									clrscr();
									float pre, mid, fin, Ave;

									gotoxy(30,9);
									cout << "Calculate the average";
									gotoxy(30,10);
									cout << "Enter Prelim: ";
									cin >> pre;
									gotoxy(30,11);
									cout << "Enter Midterm: ";
									cin >> mid;
									gotoxy(30,12);
									cout << "Enter Finals: ";
									cin >> fin;

									Ave = (pre + mid + fin)/3;

									gotoxy(30,14);
									cout << "The average is: " << Ave << endl;
									gotoxy(34,15);
									cout << "Well done!! ^__^ ";
									getch();
									break;
								case 6: 
									clrscr();
									int Snum, UP;
									char Sname[25];
									float US, TS;

									gotoxy(30,7);
									cout << "Calculate total sales";
									gotoxy(26,8);
									cout << "Input Salesman number: ";
									cin >> Snum;
									gotoxy(26,9);
									cout << "Input Salesman name: ";
									cin >> Sname;
									gotoxy(26,10);
									cout << "Input Unit Sold: ";
									cin >> US;
									gotoxy(26,11);
									cout << "Input Unit Price: ";
									cin >> UP;

									TS = US * UP;

									gotoxy(26,13);
									cout << "The total sales is: " << TS;
									getch();
									break;
								case 7: 
									clrscr();
									int a, b;
									a = 5;
									b = 6;

									gotoxy(27,8);
									cout << "Assigned numbers to a and b." << endl;
									gotoxy(40,9);
									cout << "a = 5 " << endl;
									gotoxy(40,10);
									cout << "b = 6 ";

									a = a + b;
									b = a - b;
									a = a - b;

									gotoxy(32,12);
									cout << "Swapped two numbers " << endl;
									gotoxy(40,13);
									cout << "a = " << a << endl;
									gotoxy(40,14);
									cout << "b = " << b;
									getch();
									break;
								case 8: 
									clrscr();
									float x, S, C;

									gotoxy(27,8);
									cout << "Square and Cube of a number";
									gotoxy(29,9);
									cout << "Enter a number: ";
									cin >> x;

									S = x * x;
									C = x * x * x;
	
									gotoxy(29,11);
									cout << "Square of a number is " << S << endl;
									gotoxy(29,12);
									cout << "Cube of a number is " << C;
									getch();
									break;
								case 9: 
									clrscr();
									char Ename[25];
									float NumHour, RateHour, Enum, GP;

									gotoxy(34,8);
									cout << "Gross pay";
									gotoxy(30,9);
									cout << "Employee number: ";
									cin >> Enum;
									gotoxy(30,10);
									cout << "Employee name: ";
									cin >> Ename;
									gotoxy(30,11);
									cout << "Number of hours worked: ";
									cin >> NumHour;
									gotoxy(30,12);
									cout << "Rate per hour: ";
									cin >> RateHour;

									GP = NumHour * RateHour;

									gotoxy(30,14);
									cout << "Gross pay is " << GP;
									getch();
									break;
								case 10: 
									clrscr();
									float DegC, DegF;

									gotoxy(25,10);
									cout << "Degrees Celsius to Degrees Fahrenheit" << endl;
									gotoxy(25,13);
									cout << "Degrees Celsius is ";
									cin >> DegC;

									DegF = (1.8 * DegC) + 32;

									gotoxy(25,15);
									cout << "Degrees Fahrenheit is " << DegF;
									getch();
									break;
								case 11: 
									clrscr();
									float L, W, Area, P;

									gotoxy(27,8);
									cout << "Area and Perimeter of Rectangle" << endl;
									gotoxy(27,10);
									cout << "Length of rectangle = ";
									cin >> L;
									gotoxy(27,11);
									cout << "Width of rectangle = ";
									cin >> W;

									Area = L * W;
									P = 2 * (L + W);
	
									gotoxy(27,13);
									cout << "Area of rectangle = " << Area << endl;
									gotoxy(27,14);
									cout << "Perimeter of rectangle = " << P << endl;
									getch();
									break;
								case 12: 
									break;
								case 0: 
									exit(0);
									break;
							default:
								clrscr();
								gotoxy(19,12);
		 						cout << "Invalid choice. Choose only from sequence menu.";
								getch();
								break;
							}
					}
					while (seqchoice != 12);
					break;
			case 2:
				int selchoice;
					do {
						clrscr();
						gotoxy(14,4);
						cout << "=====================================================";
						gotoxy(14,6);
						cout << "=====================================================";
						gotoxy(14,5);
						cout << "|                  Selection Menu                   |";
						gotoxy(14,7);
						cout << "|   1 - Positive or Negative                        |";
						gotoxy(14,8);
						cout << "|   2 - Odd or Even                                 |";
						gotoxy(14,9);
						cout << "|   3 - Passed or Failed                            |";
						gotoxy(14,10);
						cout << "|   4 - Total sales and Commission                  |";
						gotoxy(14,11);
						cout << "|   5 - Average and Equivalent grade                |";
						gotoxy(14,12);
						cout << "|   6 - Identify the largest number                 |";
						gotoxy(14,13);
						cout << "|   7 - Identify the smallest number                |";
						gotoxy(14,14);
						cout << "|   8 - Closest to 100                              |";
						gotoxy(14,15);
						cout << "|   9 - Sum of two numbers and their triple value   |";
						gotoxy(14,16);
						cout << "|   10 - Multiple of 3 or 7                         |";
						gotoxy(14,17);
						cout << "|   11 - Back to programming constructs             |";
						gotoxy(14,18);
						cout << "|   0 - Exit program                                |";
						gotoxy(14,19);
						cout << "=====================================================";
						gotoxy(14,20);
						cout << "Enter your choice: ";
						cin >> selchoice;
 
							switch(selchoice) {
								case 1: 
									clrscr();
									int num;
	
									gotoxy(17,11);
									cout << "Determine if the number is Positive or Negative";

									gotoxy (31,12);
									cout << "Enter a number: ";
									cin >> num;

									gotoxy (31,14);
									if (num > 0) {
										cout << "Number is Positive";
									}
									else {
										cout << "Number is Negative";
									}
									getch();
									break;
								case 2: 
									clrscr();
									int num1;
									gotoxy(19,11);
									cout << "Determine whether the number is odd or even";
									gotoxy(32,12);
									cout << "Enter a number: ";
									cin >> num1;

									gotoxy(35,14);
									if (num1 % 2 == 0) {
										cout << "Even number";
									}
									else {
										cout << "Odd number";
									}
									getch();
									break;
								case 3: 
									clrscr();
									float prel, midt, fina, Ave;

									gotoxy(32,7);
									cout << "Passed or Failed";

									gotoxy(30,8);
									cout << "Input prelim grade: ";
									cin >> prel;

									gotoxy(30,9);
									cout << "Input midterm grade: ";
									cin >> midt;

									gotoxy(30,10);
									cout << "Input final grade: ";
									cin >> fina;

									Ave = (prel + midt + fina)/3 ;

									gotoxy (30,12);
									cout << "Average is " << Ave << endl;

									gotoxy(30,13);
									if (Ave >= 75) {
										cout << "Grade passed";
									}
									else {
										cout << "Grade failed";
									}
									getch();
									break;
								case 4: 
									clrscr();
									int UP;
									char Sname[25];
									float Snum, US, TS, Com;

									gotoxy(28,8);
									cout << "Total sales and Commission";

									gotoxy(30,9);
									cout << "Salesman number: ";
									cin >> Snum;
									gotoxy(30,10);
									cout << "Salesman name: ";
									cin >> Sname;
									gotoxy(30,11);
									cout << "Unit sold: ";
									cin >> US;
									gotoxy(30,12);
									cout << "Unit price: ";
									cin >> UP;

									TS = US * UP;
	
									gotoxy(30,14);
									cout << "Total sales is: " << TS << endl;
	
									gotoxy(30,15);
									if (TS <= 10000) {
										Com = TS * 0.1;
										cout << "Commission is: " << Com;
									}
									else if (TS <= 15000) {
										Com = TS * 0.15;
										cout << "Commission is: " << Com;
									}
									else if (TS <= 20000) {
										Com = TS * 0.2;
									cout << "Commission is: " << Com;
									}
									else if (TS <= 25000) {
										Com = TS * 0.25;
										cout << "Commission is: " << Com;
									}
									else {
										Com = TS * 0.3;
										cout << "Commission is: " << Com;
									}
									getch();
									break;
								case 5: 
									clrscr();
									float pre, mid, fin, Average;

									gotoxy(28,8);
									cout << "Average and Equivalent grade";

									gotoxy(32,9);
									cout << "Prelim:  ";
									cin >> pre;
									gotoxy(32,10);
									cout << "Midterm: ";
									cin >> mid;
									gotoxy(32,11);
									cout << "Final:   ";
									cin >> fin;


									Average = (pre + mid + fin) / 3;

									gotoxy(30,13);
									cout << "Average is: " << Average << endl;
	
									gotoxy(30,14);
									if (Average >= 75) {
										cout << "Passed!" << endl;
									}
									else {
										cout << "Failed." << endl;
									}

									gotoxy(30,15);
									if (Average >= 97) {
										cout << "Equivalent grade is 1.0";
									}
									else if (Average >= 94) {
										cout << "Equivalent grade is 1.25";
									}
									else if (Average >= 91) {
										cout << "Equivalent grade is 1.50";
									}
									else if (Average >= 88) {
										cout << "Equivalent grade is 1.75";
									}
									else if (Average >= 85) {
										cout << "Equivalent grade is 2.0";
									}
									else if (Average >= 82) {
										cout << "Equivalent grade is 2.25";
									}
									else if (Average >= 79) {
										cout << "Equivalent grade is 2.50";
									}
									else if (Average >= 76) {
										cout << "Equivalent grade is 2.75";
									}
									else if (Average == 75) {
										cout << "Equivalent grade is 3.0";
									}
									else {
										cout << "Equivalent grade is 5.0";
									}
									getch();
									break;
								case 6: 
									clrscr();
									int x, y;

									gotoxy(28,8);
									cout << "Identify the largest number";

									gotoxy(32,9);
									cout << "Enter first number:  ";
									cin >> x;
									gotoxy(32,10);
									cout << "Enter second number: ";
									cin>> y;

									gotoxy(32,12);
									if (x > y) {
										cout << "Largest number is " << x;
									}
									else {
										cout << "Largest number is " << y;
									}
									getch();
									break;
								case 7: 
									clrscr();
									int x1, y1, z1;

									gotoxy(27,8);
									cout << "Identify the smallest number";

									gotoxy(30,9);
									cout << "Input first number:  ";
									cin >> x1;

									gotoxy(30,10);
									cout << "Input second number: ";
									cin >> y1;

									gotoxy(30,11);
									cout << "Input third number:  ";
									cin >> z1;

									gotoxy(31,13);
									if (x1 < y1 && x1 < z1) {
										cout << "Smallest number is " << x1;
									}
									else if (y1 < x1 && y1 < z1) {
										cout << "Smallest number is " << y1;
									}
									else {
										cout << "Smallest number is " << z1;
									}
									getch();
									break;
								case 8: 
									clrscr();
									int x2, y2, A, B;

									gotoxy(25,8);
									cout << "Identify which is closest to 100";

									gotoxy(30,9);
									cout << "Enter first number:  ";
									cin >> x2;
									gotoxy(30,10);
									cout << "Enter second number: ";
									cin >> y2;

									A = 100 - x2;
									B = 100 - y2;

									gotoxy(30,12);
									if (x2 == y2) {
										cout << "0";
									}
									else if (A > B) {
										cout << y2 << " is closest to 100.";
									}
									else {
										cout << x2 << " is closest to 100.";
									}
									getch();
									break;
								case 9: 
									clrscr();
									float val1, val2, sum, sumtrip;

									gotoxy(20,9);
									cout << "Sum of two numbers and their triple value";
									gotoxy(29,11);
									cout << "Enter first number: ";
									cin >> val1;
									gotoxy(29,12);
									cout << "Enter second number: ";
									cin >> val2;

									if (val1 == val2) {
										sum = val1 + val2;
										sumtrip = 3 * sum;
										gotoxy(25,14);
										cout << "Sum of the same number is " << sum << endl;
										gotoxy(17,15);
										cout << "The triple sum of the same inputted number is " << sumtrip << endl;
									} 
									else {
										sum = val1 + val2;
										gotoxy(37,14);
										cout << "End";
									}
									getch();
									break;
								case 10: 
									clrscr();
									int num3;

									gotoxy(31,8);
									cout << " Multiple of 3 or 7 \n";
									gotoxy(32,10);
									cout << "Input a number: ";
									cin >> num3;

									gotoxy(28,11);
									if (num3 % 3 == 0) {
										cout << "Number is a multiple of 3.";
									} 
									else if (num3 % 7 == 0) {
										cout << "Number is a multiple of 7.";
									} 
									else {
										gotoxy(21,11);
										cout << "Number is neither a multiple of 3 nor 7.";
									}
									getch();
									break;
								case 11: 
									break;
								case 0: 
									exit(0);
									break;
							default:
								clrscr();
								gotoxy(19,12);
		 						cout << "Invalid choice. Choose only from selection menu.";
								getch();
								break;
							}
							
					}
					while (selchoice != 11);
					break;			
			case 3:
				int loopchoice, loop;
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
						cout << "|   9 - Back to programming constructs              |";
						gotoxy(14,16);
						cout << "|   0 - Exit program                                |";
						gotoxy(14,17);
						cout << "=====================================================";
						gotoxy(14,18);
						cout << "=> Enter your choice: ";
						cin >> loopchoice;

							switch(loopchoice) {
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
										cout << "|                  0 - Exit program                   |";
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
										cout << "|                  0 - Exit program                   |";
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
										cout << "|                  0 - Exit program                   |";
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
											cout << "Invalid loop. Choose only from 1 to 3 choices.";
											getch();
											break;
										}
									}
									while (loop != 4);
									break;
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
										cout << "|                  0 - Exit program                   |";
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
										cout << "|                  0 - Exit program                   |";
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
										cout << "|                  0 - Exit program                   |";
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
										cout << "|                  0 - Exit Program                   |";
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
											cout << "Invalid loop. Choose only from 1 to 3 choices.";
											getch();
											break;
										}
									}
									while (loop != 4);
									break;
								case 9: 
									break;
								case 0: 
									exit(0);
									break;
							default:
								clrscr();
								gotoxy(19,12);
		 						cout << "Invalid choice. Choose only from loop menu.";
								getch();
								break;
							}
					}
					while (loopchoice != 9);
					break;

			case 0:
				exit(0);
				break;
		default: 
			clrscr();
			gotoxy(19,12);
		 	cout << "Invalid choice. Choose only from 1 to 3 prog con.";
			getch();
			break;
		}
	}
	while (choice !=0);
getch();
}
