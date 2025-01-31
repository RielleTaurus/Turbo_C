#include<iostream.h>
#include<conio.h>

float sum(float num) {
	if (num > 0) {
    		return num + sum(num - 1);
  	} 
	else {
    		return 0;
 	}
}

void main() {
	float num;
	clrscr();
	cout << "Input num: ";
	cin >> num;
  	float result = sum(num);
	cout << result;
	getch();
}