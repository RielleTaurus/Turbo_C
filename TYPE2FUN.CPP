#include<iostream.h>
#include<conio.h>

// no args with return
// kapag itong type ng function ginamit maiiwan lang ay yung input at process

//function declaration
int square(void) {
	clrscr();
	int num, sq;              //input
	cout << "Enter num: ";
	cin >> num;
	sq = num * num;           //process
	return sq;
	// pwede raw return num * num; (matik na magcompute)
}

//function calling
void main() {
	int ans;
	ans = square();
	cout << ans;
	getch();
	// gamitin ang cout kapag gusto lang idisplay sa screen
	// yung pangalawang syntax which is yung may ans, gamitin pag yung
	// return value ay needed sa computataion/expression.
}