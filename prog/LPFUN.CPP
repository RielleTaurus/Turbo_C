#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<process.h>

// GECILIE
void gecilieF() { // 1 no args no return
	clrscr();
	int ctr;
	gotoxy(22,8);
	cout << "Print Gecilie 10 times using for loop \n" << endl;

	for (ctr = 1; ctr<=10; ctr++) {
		cout.width(43);
		cout << "Gecilie\n";
	}
	getch();
}

void gecilieD() { // 1 no args no return
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
}

void gecilieW() { // 1 no args no return
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
}

//NUM 1-5
void num1to5F() { // 1 no args no return
	clrscr();
	int ctr;
	gotoxy(21,8);
	cout << "Print numbers from 1 to 5 using for loop\n" << endl;

	for (ctr=1; ctr<=5; ctr++) {
		cout.width(40);
		cout << ctr << endl;
	}
	getch();
}

void num1to5D() { // 1 no args no return
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
}

void num1to5W() { // 1 no args no return
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
}

//NUM 5-1
void num5to1F() { // 1 no args no return
	clrscr();
	int ctr;
	gotoxy(21,8);
	cout << "Print numbers from 5 to 1 using for loop\n" << endl;

	for (ctr=5; ctr>=1; ctr--) {
		cout.width(40);
		cout << ctr << endl;
	}
	getch();
}

void num5to1D() { // 1 no args no return
	clrscr();
	int ctra;
	gotoxy(18,8);
	cout << "Print numbers from 5 to 1 using do while loop\n" << endl;

	ctra=5;
	do {
		cout.width(40);
		cout << ctra << endl;
		ctra--;
	} while (ctra>=1);
	getch();
} 

void num5to1W() { // 1 no args no return
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
}

//EVEN 5-1
void even5to1F() { // 1 no args no return 
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
}

void even5to1D() { // 1 no args no return 
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
}

void even5to1W() { // 1 no args no return 
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
}

//ODD 5-1
void oddF() { // 1 no args no return
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
}

void oddD() { // 1 no args no return
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
}

void oddW() { // 1 no args no return
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
}

// PRIME
void primeF(int x) { // 3 with args no return
	int div;
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
}

void primeD(int x1) { // 3 with args no return
	int div1;
	
	div1=2;
	do {
		if (x1 % div1 ==0) {
			break;
		}
		div1++;
	}
	while (x1 > div1);
	getch();
}

void primeW(int x2) { // 3 with args no return
	int div2;
						
	div2=2;
	while (x2 > div2) {
		if (x2 % div2 ==0) {
			break;
		}
	div2++;
	}
	getch();
}

//FACTORIAL
float factorialF(float x) { // 4 with args with return
	float F=1, ctr;	
	for (ctr=x; ctr > 0; ctr--) {
		F=F * ctr;
	}
	return F;
}

float factorialD(float x2) { // 4 with args with return
	float Fac, ctra;
	Fac=1;
	ctra=x2;
	do {
		Fac=Fac*ctra;
		ctra--;
	}
	while (ctra > 0);
	return Fac;
}

float factorialW(float x3) { // 4 with args with return
	float Fact, ctrb;
	Fact=1;
	ctrb=x3;
	while (ctrb > 0) {
		Fact = Fact * ctrb;
		ctrb-- ;
	}
	return Fact;
}

//GCD
int gcdF() { // 2 no args with return
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
	return gcd;
}

int gcdD() { // 2 no args with return
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
	return gcda;
}

int gcdW() {
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
	return gcdb;
}

int subloopmenu() {
	clrscr();
	int loop;
	gotoxy(14,7);
	cout << "=======================================================";
	gotoxy(14,9);
	cout << "=======================================================";
	gotoxy(14,15);
	cout << "=======================================================";
	gotoxy(14,8);
	cout << "|                      Sub Menu                       |";
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

	return loop;
}

void main() {
       /* clrscr();
	char intuser[100], intpass[100], user[100]="Gabrielle", pass[100]="1108";

	do {
		cout << "Please login\n";
		cout << "Username: ";
		cin >> intuser;
		cout << "Password: ";
		cin >> intpass;
		if (strcmp(user,intuser)==0 && strcmp(pass,intpass)==0) {
			cout << "Login successful. Welcome to Rielle's Loop Menu";
		}
		else {
			cout << "Login failed. Please try again\n";
		}
		getch();
	}
	while (! (strcmp(user, intuser)==0 && strcmp(pass, intpass)==0));*/

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
				int loop;
				do {
					loop = subloopmenu();
					switch (loop) {
						case 1:
							gecilieF();
							break;
						case 2:
							gecilieD();
							break;
						case 3:
							gecilieW();
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
				   	loop = subloopmenu();
					switch (loop) {
						case 1:
							num1to5F();
							break;
						case 2:
							num1to5D();
							break;
						case 3:
							num1to5W();
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
				   	loop = subloopmenu();
					switch (loop) {
						case 1:
							num5to1F();
							break;
						case 2:
							num5to1D();
							break;
						case 3:
							num5to1W();
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
				   	loop = subloopmenu();
					switch (loop) {
						case 1:
							even5to1F();
							break;
						case 2:
							even5to1D();
							break;
						case 3:
							even5to1W();
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
			case 5:
				do {
					loop = subloopmenu();
					switch (loop) {
						case 1:
							oddF();
							break;
						case 2:
							oddD();
							break;
						case 3:
							oddW();
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
					loop = subloopmenu();
					switch (loop) {
						case 1:
							clrscr();
							int x;

							gotoxy(16,10);
							cout << "Check a number if it is Prime or not using for loop";;
							gotoxy(29,12);
							cout << "Enter a positive number: ";
							cin >> x;

							primeF(x);
							getch();
							break;
						case 2:
							clrscr();
							int x1;

							gotoxy(15,10);
							cout << "Check a number if it is Prime or not using do while loop";
							gotoxy(29,12);
							cout << "Enter a positive number: ";
							cin >> x1;

							primeD(x1);	
							getch();
							break;
						case 3:
							clrscr();
							int x2;

							gotoxy(16,10);
							cout << "Check a number if it is Prime or not using while loop";
							gotoxy(29,12);
							cout << "Enter a positive number: ";
							cin >> x2;

							primeW(x2);
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
					loop = subloopmenu();
					switch (loop) {
						case 1:
							clrscr();
							float x, F=1, ctr;
							gotoxy(21,8);
							cout << "Factorial of a given number using for loop";
							gotoxy(25,10);
							cout << "Enter a number: ";
							cin >> x;
							
							F = factorialF(x);
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

							Fac = factorialD(x2);

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
							
							Fact = factorialW(x3);

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
					loop = subloopmenu();
					switch (loop) {
						case 1:
							clrscr();
							int gcd;
							gcd = gcdF();
							gotoxy(37,12);
							cout << "GCD is " << gcd;
							getch();
							break;
						case 2:
							clrscr();
							int gcda;
							gcda = gcdD();
							gotoxy(37,12);
							cout << "GCD is " << gcda;
							getch();
							break;
						case 3:
							clrscr();
							int gcdb;
							gcdb = gcdW();
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
