#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<string.h>

void hello(void) { // 1 no args no return
	clrscr();
		gotoxy(35,12);
		textcolor(1+128);
			cprintf("H");
		gotoxy(36,12);
		textcolor(2+128);
			cprintf("E");
		gotoxy(37,12);
		textcolor(5+128);
			cprintf("L");
		gotoxy(38,12);
		textcolor(8+128);
			cprintf("L");
		gotoxy(39,12);
		textcolor(6+128);
			cprintf("O");
		gotoxy(41,12);
		textcolor(3+128);
			cprintf("W");
		gotoxy(42,12);
		textcolor(4+128);
			cprintf("O");
		gotoxy(43,12);
		textcolor(9+128);
			cprintf("R");
		gotoxy(44,12);
		textcolor(14+128);
			cprintf("L");
		gotoxy(45,12);
		textcolor(10+128);
			cprintf("D");
		gotoxy(46,12);
		textcolor(12+128);
			cprintf("!");
		gotoxy(38,13);
		textcolor(WHITE);
			cprintf("Gabby");
		getch();
}

void sdpq(void) { // 1 no args no return
	clrscr();
	float N1, N2, sum, dif, pro, quo;

	gotoxy(26,9);
	cout << "Sum, Difference, Product, Quotient";
	gotoxy(20,10);
	cout <<"Enter first num: ";
	cin >>N1;
	gotoxy(20,11);
	cout <<"Enter second num: ";
	cin >>N2;

	sum = N1 + N2;	
	dif = N1 - N2;
	pro = N1 * N2;
	float myFLOATquo = N1 / N2;
	
	gotoxy(20,13);
	cout << "The sum of " << N1 << " and " << N2 << " is: " << sum << endl;
	gotoxy(20,14);
	cout << "The difference of " << N1 << " and " << N2 << " is: " << dif << endl;
	gotoxy(20,15);
	cout << "The product of " << N1 << " and " << N2 << " is: " << pro << endl;
	gotoxy(20,16);
	cout << "The quotient of " << N1 << " and " << N2 << " is: " << myFLOATquo << endl;
	getch();
}

void sdpq(float N1, float N2) { // 3 with args no return
	clrscr();
	float sum, dif, pro, quo;

	gotoxy(26,9);
	cout << "Sum, Difference, Product, Quotient";

	sum = N1 + N2;	
	dif = N1 - N2;
	pro = N1 * N2;
	float myFLOATquo = N1 / N2;
	
	gotoxy(20,13);
	cout << "The sum of " << N1 << " and " << N2 << " is: " << sum << endl;
	gotoxy(20,14);
	cout << "The difference of " << N1 << " and " << N2 << " is: " << dif << endl;
	gotoxy(20,15);
	cout << "The product of " << N1 << " and " << N2 << " is: " << pro << endl;
	gotoxy(20,16);
	cout << "The quotient of " << N1 << " and " << N2 << " is: " << myFLOATquo << endl;
	getch();
}

void name(void) { // 1 no args no return
	clrscr();
	gotoxy(27,9);
	cout << "Grace Gabrielle P. Banzali" << endl;
	gotoxy(27,10);
	cout << "Grace Gabrielle P. Banzali" << endl;
	gotoxy(27,11);
	cout << "Grace Gabrielle P. Banzali" << endl;
	gotoxy(27,12);
	cout << "Grace Gabrielle P. Banzali" << endl;
	gotoxy(27,13);
	cout << "Grace Gabrielle P. Banzali" << endl;
	getch();
}

void areacirc(void) { // 1 no args no return
	clrscr();
	float Dia, Circ, A;

	gotoxy(24,9);
	cout << "Area and Circumference of a Circle";
	gotoxy(25,10);
	cout << "Input Diameter: ";
	cin >> Dia;

	Circ = 3.1416 * Dia;
	A = 3.1416 * (Dia/2) * (Dia/2);

	gotoxy(25,12);
	cout << "The Circumference of a circle is " << Circ << endl;
	gotoxy(25,13);
	cout << "The Area of a circle is " << A;
	getch();
}

void areacirc(float Dia) { // 3 with args no return
	clrscr();
	float Circ, A;

	gotoxy(24,9);
	cout << "Area and Circumference of a Circle";
	
	Circ = 3.1416 * Dia;
	A = 3.1416 * (Dia/2) * (Dia/2);

	gotoxy(25,12);
	cout << "The Circumference of a circle is " << Circ << endl;
	gotoxy(25,13);
	cout << "The Area of a circle is " << A;
	getch();
}

float average(float pre, float mid, float fin) { // 4 with args with return
	clrscr();
	float Ave;

	Ave = (pre + mid + fin)/3;
	return Ave;
}

float sales(void) { // 2 no args with return
	clrscr();
	float UP;
	char Sname[25];
	float US, TS, Snum;

	gotoxy(30,7);
	cout << "Calculate total sales";
	gotoxy(26,8);
	cout << "Input Salesman number: ";
	cin >> Snum;
	gotoxy(26,9);
	cout << "Input Salesman name: ";
	cin >> Sname;
	gotoxy(26,10);
	cout << "Input Unit Sold: ";
	cin >> US;
	gotoxy(26,11);
	cout << "Input Unit Price: ";
	cin >> UP;

	TS = US * UP;
	return TS;
}

void swap() { // 1 no args no return
	clrscr();
	int a, b;
	a = 5;
	b = 6;

	gotoxy(27,8);
	cout << "Assigned numbers to a and b." << endl;
	gotoxy(40,9);
	cout << "a = 5 " << endl;
	gotoxy(40,10);
	cout << "b = 6 ";

	a = a + b;
	b = a - b;
	a = a - b;

	gotoxy(32,12);
	cout << "Swapped two numbers " << endl;
	gotoxy(40,13);
	cout << "a = " << a << endl;
	gotoxy(40,14);
	cout << "b = " << b;
	getch();
}

void swap(int a, int b) { // 3 with args no return
	clrscr();

	gotoxy(27,8);
	cout << "Assigned numbers to a and b." << endl;

	a = a + b;
	b = a - b;
	a = a - b;

	gotoxy(32,12);
	cout << "Swapped two numbers " << endl;
	gotoxy(40,13);
	cout << "a = " << a << endl;
	gotoxy(40,14);
	cout << "b = " << b;
	getch();
}

void squarecube() { // 1 no args no return
	clrscr();
	int x, S, C;

	gotoxy(27,8);
	cout << "Square and Cube of a number";
	gotoxy(29,9);
	cout << "Enter a number: ";
	cin >> x;

	S = x * x;
	C = x * x * x;

	gotoxy(29,11);
	cout << "Square of a number is " << S << endl;
	gotoxy(29,12);
	cout << "Cube of a number is " << C;
	getch();
}

void squarecube(int x) { // 3 with args no return
	clrscr();
	int S, C;

	gotoxy(27,8);
	cout << "Square and Cube of a number";
	gotoxy(29,9);

	S = x * x;
	C = x * x * x;

	gotoxy(29,11);
	cout << "Square of a number is " << S << endl;
	gotoxy(29,12);
	cout << "Cube of a number is " << C;
	getch();
}

float grosspay(float NumHour, float RateHour	) { // 4 with args with return
	clrscr();
	float GP;

	GP = NumHour * RateHour;
	return GP;
}

void convert(float DegC) { // 3 with args no return
	clrscr();
	float DegF;

	DegF = (1.8 * DegC) + 32;

	gotoxy(25,15);
	cout << "Degrees Fahrenheit is " << DegF;
	getch();
}

void rectangle() { // 1 no args no return
	clrscr();
	float L, W, Area, P;

	gotoxy(27,8);
	cout << "Area and Perimeter of Rectangle" << endl;
	gotoxy(27,10);
	cout << "Length of rectangle = ";
	cin >> L;
	gotoxy(27,11);
	cout << "Width of rectangle = ";
	cin >> W;

	Area = L * W;
	P = 2 * (L + W);

	gotoxy(27,13);
	cout << "Area of rectangle = " << Area << endl;
	gotoxy(27,14);
	cout << "Perimeter of rectangle = " << P << endl;
	getch();
}

void rectangle(float L, float W) { // 3 with args no return
	clrscr();
	float Area, P;

	Area = L * W;
	P = 2 * (L + W);

	gotoxy(27,13);
	cout << "Area of rectangle = " << Area << endl;
	gotoxy(27,14);
	cout << "Perimeter of rectangle = " << P << endl;
	getch();
}

void main() {
int choice;

do{
	clrscr();
	gotoxy(15,4);
	cout << "+==================================================+";
	gotoxy(34,5);
	cout << "Sequence Menu" << endl;
	gotoxy(18,6);
	cout << "1 - Hello World" << endl;
	gotoxy(18,7);
	cout << "2 - Math Op" << endl;
	gotoxy(18,8);
	cout << "3 - Print names 5 times" << endl;
	gotoxy(18,9);
	cout << "4 - Area and Circumference of a circle";
	gotoxy(18,10);
	cout << "5 - Calculate average grade";
	gotoxy(18,11);
	cout << "6 - Total Sales";
	gotoxy(18,12);
	cout << "7 - Swap two numbers";
	gotoxy(18,13);
	cout << "8 - Square and Cube of a number";
	gotoxy(18,14);
	cout << "9 - Gross Pay";
	gotoxy(18,15);
	cout << "10 - Celcius to Fahrenheit";
	gotoxy(18,16);
	cout << "11 - Area and Perimeter of a Rectangle";
	gotoxy(18,17);
	cout << "0 - exit" << endl;
	gotoxy(15,19);
	cout << "+==================================================+";
	gotoxy(18,18);
	cout << "Enter your choice: ";
	cin >> choice;

	switch (choice) {
		case 1:
			clrscr();
			hello();
			break;

		case 2:
			clrscr();
			sdpq();
			
			clrscr(); // value parameter
			float num1, num2;
			sdpq(5,2);
			break;

		case 3:
			clrscr();
			name();
			break;

		case 4:
			clrscr();
			areacirc();
			
			clrscr(); // value parameter
			float Dia;
			areacirc(5);
			break;

		case 5:
			clrscr(); // variable parameter
			float pre, mid, fin, Ave;
			gotoxy(30,9);
			cout << "Calculate the average";
			gotoxy(30,10);
			cout << "Enter Prelim: ";
			cin >> pre;
			gotoxy(30,11);
			cout << "Enter Midterm: ";
			cin >> mid;
			gotoxy(30,12);
			cout << "Enter Finals: ";
			cin >> fin;
			Ave = average(pre, mid, fin);
			gotoxy(30,14);
			cout << "The average is: " << Ave << endl;
			gotoxy(34,15);
			cout << "Well done!! ^__^ ";
			getch();
			break;

		case 6:
			clrscr();
			float TS;
			TS = sales();
			gotoxy(26,13);
			cout << "The total sales is: " << TS;
			getch();
			break;

		case 7:
			clrscr();
			swap();

			clrscr(); // value parameter
			int a, b;
			swap(5,6);
			break;

		case 8:
			clrscr();
			squarecube();

			clrscr();
			gotoxy(29,9);
			cout << "Enter a number: ";
			squarecube(4);
			break;

		case 9:
			clrscr(); // variable parameter
			char Ename[25];
			float NumHour, RateHour, Enum, GP;
			gotoxy(34,8);
			cout << "Gross pay";
			gotoxy(30,9);
			cout << "Employee number: ";
			cin >> Enum;
			gotoxy(30,10);
			cout << "Employee name: ";
			cin >> Ename;
			gotoxy(30,11);
			cout << "Number of hours worked: ";
			cin >> NumHour;
			gotoxy(30,12);
			cout << "Rate per hour: ";
			cin >> RateHour;
	
			GP = grosspay(NumHour, RateHour);
			gotoxy(30,14);
			cout << "Gross pay is " << GP;
			getch();
			break;

		case 10:
			clrscr();
			float DegC;
			gotoxy(25,10);
			cout << "Degrees Celsius to Degrees Fahrenheit" << endl;
			gotoxy(25,13);
			cout << "Degrees Celsius is ";
			cin >> DegC;
			convert(DegC);
			break;

		case 11:
			clrscr(); 
			rectangle();

			clrscr(); // value parameter
			float L, W;
			gotoxy(27,8);
			cout << "Area and Perimeter of Rectangle" << endl;
			gotoxy(27,10);
			cout << "Length of rectangle = ";
			gotoxy(27,11);
			cout << "Width of rectangle = ";
			rectangle(8,9);
			break;

		case 0: exit(0);
	default:
		clrscr();
		gotoxy(33,12);
		cout << "Invalid choice";
		getch();
		break;
	}
		getch();
} while (choice < 20);
getch();
}




