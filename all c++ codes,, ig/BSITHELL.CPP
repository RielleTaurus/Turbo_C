#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main ()

{
int i;
for (i=0; i<=15; i++)

	{
	textcolor(i+128);
	gotoxy(35,12);
	cprintf("Hello World!!\n");
	delay(100);
	clrscr();
	gotoxy(40,13);
	textcolor(GREEN);
	cprintf("Gab");
	}

}