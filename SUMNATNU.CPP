#include<iostream.h>
#include<conio.h>

/* void main() { //for
	clrscr();
	int num, sum=0;
	cout << "Enter num: ";
	cin >> num;

	for(int ctr=1; ctr <= num; ctr++) {
		sum = sum + ctr;
	}
	cout << "Sum of the first " << num << " natural numbers are " << sum;
	getch();
}

void main() { //do while
	clrscr();
	int num, sum=0;
	cout << "Enter num: ";
	cin >> num;

	int ctr=1;
	do {
		sum = sum + ctr;
		ctr++;
	}
	while (ctr <= num);
	cout << "Sum of the first " << num << " natural numbers are " << sum;
getch();
} */

void main() { //while
	clrscr();
	int num, sum=0;
	cout << "Enter num: ";
	cin >> num;

	int ctr=1;
	while (ctr <= num) {
		sum = sum + ctr;
		ctr++;
	}
	cout << "Sum of " << num << " natural numbers are " << sum;
	getch();

}

