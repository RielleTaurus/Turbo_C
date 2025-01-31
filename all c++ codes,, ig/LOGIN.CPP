#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>

void main () {
	clrscr();

	char user[100]="Gabrielle", pass[100]="1108", intuser[100], intpass[100];

	do {
	cout << "Please login \n";
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

	if (strcmp (user, intuser) == 0 && strcmp(pass, intpass) == 0) {
		cout << "\nLogin successful. Welcome to Rielle's Sequence Menu";
	} else {
		cout << "\nLogin failed. Please try again \n" << endl;
	}
	getch();

	} while (! (strcmp (user, intuser) == 0 && strcmp(pass, intpass) == 0));

}