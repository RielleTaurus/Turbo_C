#include<iostream.h>
#include<conio.h>

void main(){

	clrscr();

	float D, P, r;

	cout << "Input Dollar: ";
	cin >> D;
	cout << "Rate: ";
	cin >> r;

	P = D * r;

	cout << "Dollar to Peso is " << P ;

	getch();
}