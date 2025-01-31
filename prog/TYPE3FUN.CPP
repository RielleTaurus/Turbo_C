#include<iostream.h>
#include<conio.h>

// with args no return
// process at output na lang here

//function declaration
void square(int num) {
	// no need mag clrscr();
	int sq;
	//wala na cin kasi may args naman na
	sq = num * num;           //process
	cout << sq;               // output
}

//function calling
void main() {
	// two types ng parameter: value/variable
	// yung value constant to. eto yung nakalagay sa loob ng ()
	// yung variable naman ito na yung inputted variable so any numbers
	clrscr();
	int no;
	// dito maglagay ng title kasi eto una binabasa
	cout << "Enter num: ";
	cin >> no;
	square(no); // sample ng variable parameter
	//square(5); // sample ng value parameter
	getch();
}