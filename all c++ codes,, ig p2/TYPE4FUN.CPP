#include<iostream.h>
#include<conio.h>

// with args with return

//function declaration
int square(int num) {
	clrscr();
	int sq;
	//wala na cin kasi may args naman na
	sq = num * num;           //process
	return sq;
}

//function calling
void main() {
	// two types ng parameter: value/variable
	// yung value constant to. eto yung nakalagay sa loob ng ()
	// yung variable naman ito na yung inputted variable so any numbers
	clrscr();
	int no, ans;
	cout << "Enter num: ";
	cin >> no;
	ans = square(no);
	cout << ans;
	getch();
	//sample to ng variable parameter
}