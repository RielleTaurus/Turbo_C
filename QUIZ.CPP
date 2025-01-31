#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <process.h>

void border() { 

	int i,j, style=214;
	clrscr();

	for (j=0; j<=15; j++) {
		for (i=1; i<=79; i++) {
			textcolor (5);
			gotoxy (i,1);
			cprintf("%c", style);
			gotoxy (i,24);
			cprintf("%c", style);
		}
	}

	for (j=0; j<=15; j++) {
		for (i=1; i<=24; i++) {
			textcolor (5);
			gotoxy (1,i);
			cprintf("%c", style);
			gotoxy (79,i);
			cprintf("%c", style);
		}
	}
}

void login() {
	char ans[5];
	gotoxy(10,10);
	textcolor(13);
	cprintf("============================================================");

	gotoxy (22,11);
	textcolor(WHITE);
	cprintf( "Do You Want To Access The Loop Menu?" );

	gotoxy (34,12);
	textcolor(WHITE);
	cprintf( "'Yes' or 'No'" );

	gotoxy(10,13);
	textcolor(13);
	cprintf("============================================================");

	gotoxy (10,14);
	textcolor(WHITE);
	cprintf("Enter your answer: ");
	cin>> ans;

	if (strcmp(ans, "Yes")==0) {
		clrscr();
		border();
	}

	else {
		clrscr();
		border();

		gotoxy(10,11);
		textcolor(13);
		cprintf("============================================================");

		gotoxy(28,12);
		textcolor(WHITE);
		cprintf("Thank you for your time!");

		gotoxy(10,13);
		textcolor(13);
		cprintf("============================================================");

		getch();
		exit(0);
	}
}

void login1()
{
	int i=0, att=0;
	const int maxAtt=3;
	char pass[10]="100205", usern[10]="Jaira", p[10]=" ", u[10]=" ", ch;

	while (att<maxAtt) {
		i=0;

		clrscr();
		border();

		gotoxy(10,10);
		textcolor(13);
		cprintf("============================================================");

		gotoxy(30,11);
		textcolor(WHITE);
		cprintf("Welcome to Loop Menu");

		gotoxy(10,12);
		textcolor(13);
		cprintf("============================================================");

		gotoxy(10,15);
		textcolor(13);
		cprintf("============================================================");

		gotoxy(10,13);
		textcolor(WHITE);
		cprintf("Enter your Username: ");
		cin>>u;

		gotoxy(10,14);
		textcolor(WHITE);
		cprintf("Enter your Password: ");

		while ((ch=getch())!=13){
			if(ch==8){
				if (i>0) {
					p[i]=0;
					cout<<"\b \b";
					i--;
				}
			}
			else {
				p[i]=ch;
				cout<<"*";
				i++;
			}
		}

		gotoxy(10,18);
		textcolor(13);
		cprintf("============================================================");

		if (strcmp(u, usern)==0 && strcmp(p,pass)==0) {
			gotoxy(31,16);
			textcolor(13);
			cprintf("You are logged in!");
			getch();
			break;
		}
		else {
			att++;
			gotoxy(15,16);
			textcolor(13);
			cprintf("You have entered an invalid username or password!");
			cout<< endl;
			gotoxy(25,17);
			textcolor(13);
			cprintf("You only have %d attempts left!", maxAtt-att);
			getch();
			clrscr();
		}

	}

	if (att==maxAtt) {
		border();
		gotoxy(14,12);
		textcolor(13+128);
		cprintf("Terminating program. Maximum login attempts reached!");
		getch();
		exit(0);
		}

}

int subMenu(){
	border();
	int choice;

	gotoxy(10,9);
	textcolor(13);
	cprintf("============================================================");

	gotoxy(32,10);
	textcolor(WHITE);
	cprintf("Loop 1 Sub Menu!");
	
	gotoxy(10,11);
	textcolor(13);
	cprintf("============================================================");

	gotoxy(10,12);
	textcolor(WHITE);
	cprintf("1 - For Loop");
	gotoxy(10,13);
	textcolor(WHITE);
	cprintf("2 - Do-While Loop");
	gotoxy(10,14);
	textcolor(WHITE);
	cprintf("3 - While Loop");
	gotoxy(10,15);
	textcolor(WHITE);
	cprintf("4 - Return");

	gotoxy(10,16);
	textcolor(13);
	cprintf("============================================================");

	gotoxy(10,18);
	textcolor(13);
	cprintf("============================================================");

	gotoxy(10,17);
	textcolor(WHITE);
	cprintf("Enter your choice: ");
	cin>> choice;

	return choice;
}

void GecilieFor(){
	clrscr();
	border();
	gotoxy(10,6);
	textcolor(13);
	cprintf("============================================================");
	gotoxy(23,7);
	textcolor(WHITE);
	cprintf("Print Gecilie 10 Times! (For Loop)");
	gotoxy(10,8);
	textcolor(13);
	cprintf("============================================================");
	cout<<endl;

	int Ctr, y=10;

	for(Ctr=1;Ctr<=10;Ctr++) {
		gotoxy(36,y);
		cout<<"Gecilie"<<endl;
		y++;
	}
}

void GecilieDoWhile(){
	clrscr();
	border();
	gotoxy(10,6);
	textcolor(13);
	cprintf("============================================================");

	gotoxy(21,7);
	textcolor(WHITE);
	cprintf("Print Gecilie 10 Times! (Do-While Loop)");

	gotoxy(10,8);
	textcolor(13);
	cprintf("============================================================");
	cout<<endl;

	int Ctr=1, y=10;

	do {
		gotoxy(36,y);
		cout<<"Gecilie";
		Ctr++;
		y++;

	} while (Ctr<=10);
}

void GecilieWhile(){
	clrscr();
	border();
	gotoxy(10,6);
	textcolor(13);
	cprintf("============================================================");

	gotoxy(22,7);
	textcolor(WHITE);
	cprintf("Print Gecilie 10 Times! (While Loop)");

	gotoxy(10,8);
	textcolor(13);
	cprintf("============================================================");
	cout<<endl;

	int Ctr=1, y=10;

	while (Ctr<=10){
		gotoxy(36,y);
		cout<<"Gecilie";
		Ctr++;
		y++;
	}
}

void Numbers15For(){
	clrscr();
	border();
 	gotoxy(10,9);
	textcolor(13);
	cprintf("============================================================");

 	gotoxy(22,10);
	textcolor(WHITE);
	cprintf("Print Numbers from 1 to 5! (For Loop)");

	gotoxy(10,11);
	textcolor(13);
	cprintf("============================================================");
	cout<<endl;
		
	int Ctr,y=12;
	
	for(Ctr=1;Ctr<=5;Ctr++) {
		gotoxy(40,y);
		cout<< Ctr <<endl;
		y++;
	}
}

void Numbers15DoWhile(){
	clrscr();
	border();
 	gotoxy(10,9);
	textcolor(13);
	cprintf("============================================================");

 	gotoxy(19,10);
	textcolor(WHITE);
	cprintf("Print Numbers from 1 to 5! (Do-While Loop)");

	gotoxy(10,11);
	textcolor(13);
	cprintf("============================================================");
	cout<<endl;
		
	int Ctr=1, y=12;

	do {
		gotoxy(40,y);
		cout<< Ctr <<endl;
		Ctr++;
		y++;
	} while (Ctr<=5);
}

void Numbers15While(){
	clrscr();
	border();
 	gotoxy(10,9);
	textcolor(13);
	cprintf("============================================================");

 	gotoxy(21,10);
	textcolor(WHITE);
	cprintf("Print Numbers from 1 to 5! (While Loop)");

	gotoxy(10,11);
	textcolor(13);
	cprintf("============================================================");
	cout<<endl;
		
	int Ctr=1, y=12;

	while (Ctr<=5){
		gotoxy(40,y);
		cout<< Ctr;
		Ctr++;
		y++;
	}
}

void Numbers51For(){
	clrscr();
	border();
 	gotoxy(10,9);
	textcolor(13);
	cprintf("============================================================");

 	gotoxy(22,10);
	textcolor(WHITE);
 	cprintf("Print Numbers from 5 to 1! (For Loop)");

 	gotoxy(10,11);
	textcolor(13);
	cprintf("============================================================");
	cout<< endl;

	int Ctr, y=12;
	
	for(Ctr=5;Ctr>0;Ctr--) {
		gotoxy(40,y);
		cout<< Ctr;
		y++;
	}
}

void Numbers51DoWhile(){
	clrscr();
	border();
 	gotoxy(10,9);
	textcolor(13);
	cprintf("============================================================");

 	gotoxy(19,10);
	textcolor(WHITE);
 	cprintf("Print Numbers from 5 to 1! (Do-While Loop)");

 	gotoxy(10,11);
	textcolor(13);
	cprintf("============================================================");
	cout<< endl;

	int Ctr=5, y=12;
	
	do {
		gotoxy(40,y);
		cout<< Ctr;
		Ctr--;
		y++;
	} while (Ctr>0);
}

void Numbers51While(){
	clrscr();
	border();
 	gotoxy(10,9);
	textcolor(13);
	cprintf("============================================================");

 	gotoxy(22,10);
	textcolor(WHITE);
 	cprintf("Print Numbers from 5 to 1! (While Loop)");

 	gotoxy(10,11);
	textcolor(13);
	cprintf("============================================================");
	cout<< endl;

	int Ctr=5, y=12;
	
	while (Ctr>0){
		gotoxy(40,y);
		cout<< Ctr;
		Ctr--;
		y++;
 	}
}

void evenNumFor(int n){
	clrscr();
	border();
 	gotoxy(10,9);
	textcolor(13);
	cprintf("============================================================");

 	gotoxy(17,10);
	textcolor(WHITE);
 	cprintf("Print All Even Numbers from 5 to 1! (For Loop)");

 	gotoxy(10,11);
	textcolor(13);
	cprintf("============================================================");
	cout<< endl;

 	int Ctr, y=12;

	for(Ctr=n;Ctr>0;Ctr--)
 	{
		if (Ctr%2==0) {
			gotoxy(40,y);
    			cout<< Ctr <<endl;
			y++;
    			}
		else {
			}
	}
}

void evenNumDoWhile(int n){
	clrscr();
	border();
 	gotoxy(10,9);
	textcolor(13);
	cprintf("============================================================");

 	gotoxy(16,10);
	textcolor(WHITE);
	cprintf("Print All Even Numbers from 5 to 1! (Do-While Loop)");

 	gotoxy(10,11);
	textcolor(13);
	cprintf("============================================================");
	cout<< endl;

	int Ctr=n, y=12;

	do {
		if (Ctr%2==0) {
			gotoxy(40,y);
			cout<< Ctr <<endl;
			Ctr--;
			y++;
		}
	else {
		Ctr--;
		}

	} while (Ctr>0);
}

void evenNumWhile(int n){
	clrscr();
	border();
	gotoxy(10,9);
	textcolor(13);
	cprintf("============================================================");

	gotoxy(17,10);
	textcolor(WHITE);
	cprintf("Print All Even Numbers from 5 to 1! (While Loop)");

	gotoxy(10,11);
	textcolor(13);
	cprintf("============================================================");
	cout<< endl;

	int Ctr=n, y=12;

	while (Ctr>0)
	{
		if (Ctr%2==0) {
			gotoxy(40,y);
			cout<< Ctr <<endl;
			Ctr--;
			y++;
		}
 		else {
      			Ctr--;
		}
     	}
}

void oddNumFor(int n){
	clrscr();
	border();
 	gotoxy(10,9);
	textcolor(13);
	cprintf("============================================================");

 	gotoxy(17,10);
	textcolor(WHITE);
	cprintf("Print All Odd Numbers from 5 to 1! (For Loop)");

 	gotoxy(10,11);
	textcolor(13);
	cprintf("============================================================");
	cout<< endl;

 	int Ctr, y=12;

	for(Ctr=n;Ctr>0;Ctr--)
 	{
		if (Ctr%2==1) {
			gotoxy(40,y);
			cout<< Ctr <<endl;
			Ctr--;
			y++;
		}
 		else {
		}
     	}
}

void oddNumDoWhile(int n){
	clrscr();
	border();
 	gotoxy(10,9);
	textcolor(13);
	cprintf("============================================================");

 	gotoxy(16,10);
	textcolor(WHITE);
	cprintf("Print All Odd Numbers from 5 to 1! (Do-While Loop)");

 	gotoxy(10,11);
	textcolor(13);
	cprintf("============================================================");
	cout<< endl;

 	int Ctr=n, y=12;

	do {
		if (Ctr%2==1) {
			gotoxy(40,y);
			cout<< Ctr;
			Ctr--;
			y++;
		}
 		else {
      			Ctr--;
		}

     	} while (Ctr>0);
}

void oddNumWhile(int n){
	clrscr();
	border();
 	gotoxy(10,9);
	textcolor(13);
	cprintf("============================================================");

 	gotoxy(17,10);
	textcolor(WHITE);
	cprintf("Print All Odd Numbers from 5 to 1! (While Loop)");

 	gotoxy(10,11);
	textcolor(13);
	cprintf("============================================================");
	cout<< endl;

 	int Ctr=n, y=12;

	while (Ctr>0)
 	{
		if (Ctr%2==1) {
			gotoxy(40,y);
			cout<< Ctr;
			Ctr--;
			y++;
		}
 		else {
      			Ctr--;
		}
     	}
}

void PrimeOrNotFor(int n1){
	int C,i;
	for (i=2; i<n1; i++) {
		if (n1%i==0) {
			C++;
			break;
		}
	}
	if (C==0) {
		gotoxy(10,14);
		cout<< n1 <<" is a Prime Number!";
	}
	else {
		gotoxy(10,14);
		cout<< n1 <<" is NOT a Prime Number!";
	}
}

void PrimeOrNotDoWhile(int n1){
	int C, i=2;
	do {
		if (n1%i==0) {
		C++;
		break;
		}
		i++;
	} while (i>n1);

      	gotoxy(10,14);
	if (C==0) {
		gotoxy(10,14);
		cout<< n1 <<" is a Prime Number!";
	}
	else {
		gotoxy(10,14);
		cout<< n1 <<" is NOT a Prime Number!";
	}
}

void PrimeOrNotWhile(int n1){
	int C, i=2;
	while (i<n1)
	{
		if (n1%i==0) {
			C++;
			break;
			}
			i++;
		}

	gotoxy(10,14);
	if (C==0) {
		gotoxy(10,14);
		cout<< n1 <<" is a Prime Number!";
	}
	else {
		gotoxy(10,14);
		cout<< n1 <<" is NOT a Prime Number!";
	}
}

int FactorialFor(){
	clrscr();
	border();
	int n1, F=1, i=1;

	textcolor(5);
	gotoxy(10,9);
	cprintf("============================================================");

	textcolor(WHITE);
	gotoxy(14,10);
	cprintf("Display the Factorial of the Given Number (For Loop)");

	textcolor(5);
	gotoxy(10,11);
	cprintf("============================================================");

	textcolor(WHITE);
 	gotoxy(10,12);
 	cprintf("Enter number: ");
 	cin>> n1;

 	textcolor(5);
 	gotoxy(10,13);
 	cprintf("============================================================");

	textcolor(5);
 	gotoxy(10,15);
	cprintf("============================================================");

	for (i=1; i<=n1; i++) {
		F = F * i;
	}

	gotoxy(10,14);
 	cout<< n1 << "! = ";
	return F;
}

int FactorialDoWhile(){	
	clrscr();
	border();
 	int n1, F=1, i=1;

 	textcolor(5);
 	gotoxy(10,9);
 	cprintf("============================================================");

 	textcolor(WHITE);
	gotoxy(12,10);
 	cprintf("Display the Factorial of the Given Number (Do-While Loop)");
	
 	textcolor(5);
 	gotoxy(10,11);
 	cprintf("============================================================");

 	textcolor(WHITE);
 	gotoxy(10,12);
 	cprintf("Enter number: ");
 	cin>> n1;

 	textcolor(5);
 	gotoxy(10,13);
 	cprintf("============================================================");

	textcolor(5);
 	gotoxy(10,15);
 	cprintf("============================================================");

 	do {
 		F = F * i;
 		i++;
 	} while (i<=n1);

 	gotoxy(10,14);
 	cout<< n1 << "! = ";
	return F;
}

int FactorialWhile(){
	clrscr();
	border();
	int n1, F=1, i=1;

 	textcolor(5);
 	gotoxy(10,9);
 	cprintf("============================================================");

 	textcolor(WHITE);
	gotoxy(13,10);
 	cprintf("Display the Factorial of the Given Number (While Loop)");

 	textcolor(5);
 	gotoxy(10,11);
 	cprintf("============================================================");

 	textcolor(WHITE);
 	gotoxy(10,12);
 	cprintf("Enter number: ");
 	cin>> n1;

 	textcolor(5);
 	gotoxy(10,13);
 	cprintf("============================================================");

	textcolor(5);
 	gotoxy(10,15);
 	cprintf("============================================================");

 	while (i<=n1) {
 		F = F * i;
 		i++;
 	}

 	gotoxy(10,14);
	cout<< n1 << "! = ";
	return F;
}

int GCDFor(int n1, int n2){
	int i, gcd;
	for (i=1; i<=n1 && i<=n2; ++i) {
		if (n1%i==0 && n2%i==0) {
			gcd=i;
		}
	}
	return gcd;
}

int GCDDoWhile(int n1, int n2){
	int i=1, gcd;
	do {
		if (n1%i==0 && n2%i==0) {
			gcd=i;
		}
		++i;
	} while (i<=n1 && i<=n2);
	return gcd;
}

int GCDWhile(int n1, int n2){
	int i=1, gcd;
	while (i<=n1 && i<=n2) {
		if (n1%i==0 && n2%i==0) {
			gcd=i;
		}
		++i;
	}
	return gcd;
}

void menuLoop(){
	int choice;
	do {
		border();
		gotoxy(10,4);
		textcolor(13);
		cprintf("============================================================");

		gotoxy(36,5);
		textcolor(WHITE);
		cprintf("Loop Menu");

		gotoxy(10,6);
		textcolor(13);
		cprintf("============================================================");
		
		gotoxy(10,7);
		textcolor(WHITE);
		cprintf("1 - Print Gecilie 10 Times!");	//1
		gotoxy(10,8);
		textcolor(WHITE);
		cprintf("2 - Print Numbers from 1 to 5!"); //1
		gotoxy(10,9);
		textcolor(WHITE);
		cprintf("3 - Print Numbers from 5 to 1!"); //1
		gotoxy(10,10);
		textcolor(WHITE);
		cprintf("4 - Print All Even Numbers from 5 to 1!"); //3
		gotoxy(10,11);
		textcolor(WHITE);
		cprintf("5 - Print All Odd Numbers from 5 to 1!"); //3
		gotoxy(10,12);
		textcolor(WHITE);
		cprintf("6 - Is the Number Prime or Not?"); //3
		gotoxy(10,13);
		textcolor(WHITE);
		cprintf("7 - Display the Factorial of the Given Number!"); //2
		gotoxy(10,14);
		textcolor(WHITE);
		cprintf("8 - Find the Greatest Common Divisor!"); //4
		gotoxy(10,15);
		textcolor(WHITE);
		cprintf("9 - Return");

		gotoxy(10,16);
		textcolor(13);
		cprintf("============================================================");

		gotoxy(10,18);
		textcolor(13);
		cprintf("============================================================");

		gotoxy(10,17);
		textcolor(WHITE);
		cprintf("Enter your choice: ");
		textcolor(WHITE);
		cin>> choice;

		clrscr();
		switch(choice) {
			case 1: {
				int choice=subMenu();
				switch(choice) {
					case 1: {
						GecilieFor();
						getch();
						break;
						}
			
					case 2: {
						GecilieDoWhile();
						getch();
						break;
						}
	
					case 3: {
						GecilieWhile();
						getch();
						break;
						}

					case 4: {
						break;
						}
					}
				break;
			} 

			case 2: {
				int choice=subMenu();
				switch(choice) {
					case 1: {
						Numbers15For();
						getch();
						break;
						}

					case 2: {
						Numbers15DoWhile();
						getch();
						break;
						}
			
					case 3: {
						Numbers15While();
						getch();
						break;
						}
							
					case 4: {
						clrscr();
						getch();
						break;
						}

					} 
				break;
			}
		
			case 3: {
				int choice=subMenu();	
				switch(choice) {
					case 1: {
						Numbers51For();
						getch();
						break;
						}

					case 2: {
						Numbers51DoWhile();
						getch();
						break;
						}

					case 3: {
						Numbers51While();
						getch();
						break;
						}

					case 4: {
						break;
						}	
					}
				break;
			}
		
			case 4: {
				int choice=subMenu();
				switch(choice) {
					case 1: {
						evenNumFor(5);
						getch();
						break;
						}

					case 2: {
						evenNumDoWhile(5);
						getch();
						break;
						}
	
					case 3: {
						evenNumWhile(5);
						getch();
						break;
						}

					case 4: {
						break;
						}	
					}
				break;
			}

			case 5: {
				int choice=subMenu();
				switch(choice) {
					case 1: {
						oddNumFor(5);
						getch();
						break;
						}

					case 2: {
						oddNumDoWhile(5);
						getch();
						break;
						}
		
					case 3: {
						oddNumWhile(5);
						getch();
						break;
						}

					case 4: {
						break;
						}
					}
				break;
			}

			case 6: {
				int choice=subMenu();
				switch(choice) {
					case 1: {
						clrscr();
						border();
						int n1, i;

						textcolor(5);
						gotoxy(10,9);
						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy(21,10);
						cprintf("Is the Number Prime or Not? (For Loop)");

						textcolor(5);
						gotoxy(10,11);
						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy(10,12);
						cprintf("Enter number: ");
						cin>> n1;

						textcolor(5);
						gotoxy(10,13);
						cprintf("============================================================");
						PrimeOrNotFor(n1);

						getch();
						break;
						}

					case 2: {
						clrscr();
						border();
						int n1, i;

						textcolor(5);
						gotoxy(10,9);
						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy(19,10);
						cprintf("Is the Number Prime or Not? (Do-While Loop)");

						textcolor(5);
						gotoxy(10,11);
						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy(10,12);
						cprintf("Enter number: ");
						cin>> n1;

						textcolor(5);
						gotoxy(10,13);
						cprintf("============================================================");
						PrimeOrNotDoWhile(n1);

						getch();
						break;
						}

					case 3: {
						clrscr();
						border();
						int n1, i;

						textcolor(5);
						gotoxy(10,9);
						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy(20,10);
						cprintf("Is the Number Prime or Not? (While Loop)");

						textcolor(5);
						gotoxy(10,11);
						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy(10,12);
						cprintf("Enter number: ");
						cin>> n1;

						textcolor(5);
						gotoxy(10,13);
						cprintf("============================================================");
						PrimeOrNotWhile(n1);
						
						getch();
						break;
						}

					case 4: {
						break;
						}
					}
				break;
			}

			case 7: {
				int choice=subMenu();
				switch(choice) {
					case 1: {
						cout<< FactorialFor();
						getch();
						break;
						}	

					case 2: {
						cout<< FactorialDoWhile();
						getch();
						break;
						}

					case 3: {
						cout<< FactorialWhile();
						getch();
						break;
						}

					case 4: {
						break;
						}
					}
				break;
			} 

			case 8: {
				int choice=subMenu();
				switch(choice) {
					case 1: {
						clrscr();
						border();
 						int n1, n2;

 						textcolor(5);
 						gotoxy(10,9);
 						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy(19,10);
						cprintf("Find the Greatest Common Divisor (For Loop)");

						textcolor(5);
						gotoxy(10,11);
						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy(10,12);
						cprintf("Enter the first number: ");
						cin>> n1;

						textcolor(WHITE);
						gotoxy(10,13);
						cprintf("Enter the second number: ");
						cin>> n2;

						textcolor(5);
						gotoxy(10,14);
						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy (10,15);
						cprintf("The Greatest Common Divisor is: ");
						cout<< GCDFor(n1,n2);

						textcolor(5);
						gotoxy(10,16);
						cprintf("============================================================");

						getch();
						break;
						}

					case 2: {
						clrscr();
						border();
 						int n1, n2;
	
 						textcolor(5);
 						gotoxy(10,9);
 						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy(17,10);
						cprintf("Find the Greatest Common Divisor (Do-While Loop)");

						textcolor(5);
						gotoxy(10,11);
						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy(10,12);
						cprintf("Enter the first number: ");
						cin>> n1;

						textcolor(WHITE);
						gotoxy(10,13);
						cprintf("Enter the second number: ");
						cin>> n2;

						textcolor(5);
						gotoxy(10,14);
						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy (10,15);
						cprintf("The Greatest Common Divisor is: ");
						cout<< GCDDoWhile(n1,n2);

						textcolor(5);
						gotoxy(10,16);
						cprintf("============================================================");

						getch();
						break;
						}

					case 3: {
						clrscr();
						border();
 						int n1, n2;

 						textcolor(5);
 						gotoxy(10,9);
 						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy(18,10);
						cprintf("Find the Greatest Common Divisor (While Loop)");

						textcolor(5);
						gotoxy(10,11);
						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy(10,12);
						cprintf("Enter the first number: ");
						cin>> n1;

						textcolor(WHITE);
						gotoxy(10,13);
						cprintf("Enter the second number: ");
						cin>> n2;

						textcolor(5);
						gotoxy(10,14);
						cprintf("============================================================");

						textcolor(WHITE);
						gotoxy (10,15);
						cprintf("The Greatest Common Divisor is: ");
						cout<< GCDWhile(n1,n2);

						textcolor(5);
						gotoxy(10,16);
						cprintf("============================================================");

						getch();
						break;
						}
					case 4: {
						break;
						}

					}
				break;
			} 

			case 9: {
				clrscr();
				border();
				login();
				break;
				}

			default: {
				clrscr();
				border();
				gotoxy(32,12);
				cout<<"Invalid Choice!";
				getch();
				exit(0);
				}
			}

		} while (choice<=9);
		getch();
	}

void main(){
	border();
	login();
	login1();
	menuLoop();
	subMenu();
}
