#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int num, r, sum=0;
	cout << "Sum of the digits of a givcn number" << endl;
	cout << "Enter number: ";
	cin >> num;

	while (num > 0) {
			r = num % 10;
			sum = sum + r;
			num = num / 10;
	}
	cout << "Sum of the digits is " << sum;
			getch();
}