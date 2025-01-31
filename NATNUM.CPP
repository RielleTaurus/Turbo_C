#include<iostream.h>
#include<conio.h>

/* void main() { //for
	clrscr();
	int num;
	cout << "Enter number to find the natural numbers: ";
	cin >> num;
	cout << "\nNatural numbers are: \n";

	for(int ctr = 1; ctr <= num; ctr++) {
		cout << ctr << " ";
	}
	getch();
}

void main() { //do while
	clrscr();
	int num;
	cout << "Enter num: ";
	cin >> num;
	cout << "\nThe first " << num << " natural numbers are: ";

	int ctr=1;
	do {
		cout << ctr << " ";
		ctr++;
	}
	while (ctr <= num);
	getch();
} */

void main() { //while
	clrscr();
	int num;
	cout << "Enter num: ";
	cin >> num;
	cout << "\nThe first " << num << " natural numbers are: ";

	int ctr=1;
	while (ctr <= num) {
		cout << ctr << " ";
		ctr++;
	}
	getch();
}


