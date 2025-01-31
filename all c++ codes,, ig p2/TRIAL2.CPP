#include<iostream.h>
#include<conio.h>
#include<process.h>

void main() {
	clrscr();
	int choice;
	do {
		clrscr();
		cout << "Programming Constructs Main Menu\n";
		cout << "    1 - Sequence\n";
		cout << "    2 - Selection\n";
		cout << "    3 - Loop/Iteration\n";
		cout << "    0 - Exit program\n\n";
		cout << "Enter your choice: ";
		cin >> choice;
	
		switch(choice) {
			case 1: 
				int seqchoice;
					do {
						clrscr();
						cout << "    Sequence menu   \n";
						cout << "  1 - \n";
						cout << "  2 - \n";
						cout << "  3 - \n";
						cout << "  4 - \n";
						cout << "  5 - \n";
						cout << "  6 - \n";
						cout << "  7 - \n";
						cout << "  8 - \n";
						cout << "  9 - \n";
						cout << "  10 - \n";
						cout << "  11 - \n";
						cout << "  12 - back to prog con\n";
						cout << "  0 - \n";
						cout << "Enter your choice: ";
						cin >> seqchoice;

							switch(seqchoice) {
								case 1: 
									clrscr();
									cout << "   HELLO WORLD   \n";
									getch();
									break;
								case 2: 
									clrscr();
									cout << "   MATH OP   \n";
									getch();
									break;
								case 3: 
									clrscr();
									cout << "   PRINT 5x   \n";
									getch();
									break;
								case 4: 
									clrscr();
									cout << "   AREA CIRC   \n";
									getch();
									break;
								case 5: 
									clrscr();
									cout << "   AVERAGE   \n";
									getch();
									break;
								case 6: 
									clrscr();
									cout << "   TOTAL SALES   \n";
									getch();
									break;
								case 7: 
									clrscr();
									cout << "   SWAP   \n";
									getch();
									break;
								case 8: 
									clrscr();
									cout << "   SQ AND CUBE   \n";
									getch();
									break;
								case 9: 
									clrscr();
									cout << "   GROSS PAY   \n";
									getch();
									break;
								case 10: 
									clrscr();
									cout << "   CEL TO FAH   \n";
									getch();
									break;
								case 11: 
									clrscr();
									cout << "   AREA RECT   \n";
									getch();
									break;
								case 12: 
									break;
								case 0: 
									exit(0);
									break;
							default:
								clrscr();
								gotoxy(19,12);
		 						cout << "Invalid choice. Choose only from sequence menu.";
								getch();
								break;
							}
					}
					while (seqchoice != 12);
					break;
			case 2:
				int selchoice;
					do {
						clrscr();
						cout << "    Selection menu   \n";
						cout << "  1 - \n";
						cout << "  2 - \n";
						cout << "  3 - \n";
						cout << "  4 - \n";
						cout << "  5 - \n";
						cout << "  6 - \n";
						cout << "  7 - \n";
						cout << "  8 - \n";
						cout << "  9 - \n";
						cout << "  10 - \n";
						cout << "  11 - back to prog con\n";
						cout << "  0 - \n";
						cout << "Enter your choice: ";
						cin >> selchoice;
 
							switch(selchoice) {
								case 1: 
									clrscr();
									cout << "   POSITIVE NEGATIVE   \n";
									getch();
									break;
								case 2: 
									clrscr();
									cout << "   ODD EVEN   \n";
									getch();
									break;
								case 3: 
									clrscr();
									cout << "   PASSED FAILED   \n";
									getch();
									break;
								case 4: 
									clrscr();
									cout << "   COMMISSION   \n";
									getch();
									break;
								case 5: 
									clrscr();
									cout << "   EQUIVALENT   \n";
									getch();
									break;
								case 6: 
									clrscr();
									cout << "   LARGEST   \n";
									getch();
									break;
								case 7: 
									clrscr();
									cout << "   SMALLEST   \n";
									getch();
									break;
								case 8: 
									clrscr();
									cout << "   100   \n";
									getch();
									break;
								case 9: 
									clrscr();
									cout << "   SUM   \n";
									getch();
									break;
								case 10: 
									clrscr();
									cout << "   MULTIPLE   \n";
									getch();
									break;
								case 11: 
									break;
								case 0: 
									exit(0);
									break;
							default:
								clrscr();
								gotoxy(19,12);
		 						cout << "Invalid choice. Choose only from sequence menu.";
								getch();
								break;
							}
							
					}
					while (selchoice != 11);
					break;			
			case 3:
				int loopchoice, loop;
					do {
						clrscr();
						cout << "    Loop menu   \n";
						cout << "  1 - \n";
						cout << "  2 - \n";
						cout << "  3 - \n";
						cout << "  4 - \n";
						cout << "  5 - \n";
						cout << "  6 - \n";
						cout << "  7 - \n";
						cout << "  8 - \n";
						cout << "  9 - back to prog con\n";
						cout << "  0 - \n";
						cout << "Enter your choice: ";
						cin >> loopchoice;

							switch(loopchoice) {
								case 1: 
									do {
										clrscr();
										cout << "CASE 1 Sub menu loop\n";
										cout << "1- for\n";
										cout << "2- dow\n";
										cout << "3 - while\n";
										cout << "4 - back to loop menu\n";
										cout << "0 - exit\n";
										cout << "choose loop: ";
										cin >> loop;

										switch (loop) {
											case 1:
												clrscr();
												cout << "using loop";
												getch();
												break;
											case 2:
												clrscr();
												cout << "using do while";
												getch();
												break;
											case 3:
												clrscr();
												cout << "using while";
												getch();
												break;
											case 4: 
												break;
											case 0:
												exit(0);
												break;
										default: 
											clrscr();
											cout << "Invalid loop. Choose only from 1 to 3 choices.";
											getch();
											break;
										}
									}
									while (loop != 4);
									break;
								case 2: 
									do {
										clrscr();
										cout << "CASE 2 Sub menu loop\n";
										cout << "1- for\n";
										cout << "2- dow\n";
										cout << "3 - while\n";
										cout << "4 - back to loop menu\n";
										cout << "0 - exit\n";
										cout << "choose loop: ";
										cin >> loop;

										switch (loop) {
											case 1:
												clrscr();
												cout << "using loop";
												getch();
												break;
											case 2:
												clrscr();
												cout << "using do while";
												getch();
												break;
											case 3:
												clrscr();
												cout << "using while";
												getch();
												break;
											case 4: 
												break;
											case 0:
												exit(0);
												break;
										default: 
											clrscr();
											cout << "Invalid loop. Choose only from 1 to 3 choices.";
											getch();
											break;
										}
									}
									while (loop != 4);
									break;
								case 3: 
									do {
										clrscr();
										cout << "CASE 3 Sub menu loop\n";
										cout << "1- for\n";
										cout << "2- dow\n";
										cout << "3 - while\n";
										cout << "4 - back to loop menu\n";
										cout << "0 - exit\n";
										cout << "choose loop: ";
										cin >> loop;

										switch (loop) {
											case 1:
												clrscr();
												cout << "using loop";
												getch();
												break;
											case 2:
												clrscr();
												cout << "using do while";
												getch();
												break;
											case 3:
												clrscr();
												cout << "using while";
												getch();
												break;
											case 4: 
												break;
											case 0:
												exit(0);
												break;
										default: 
											clrscr();
											cout << "Invalid loop. Choose only from 1 to 3 choices.";
											getch();
											break;
										}
									}
									while (loop != 4);
									break;
								case 4: 
									do {
										clrscr();
										cout << "CASE 4 Sub menu loop\n";
										cout << "1- for\n";
										cout << "2- dow\n";
										cout << "3 - while\n";
										cout << "4 - back to loop menu\n";
										cout << "0 - exit\n";
										cout << "choose loop: ";
										cin >> loop;

										switch (loop) {
											case 1:
												clrscr();
												cout << "using loop";
												getch();
												break;
											case 2:
												clrscr();
												cout << "using do while";
												getch();
												break;
											case 3:
												clrscr();
												cout << "using while";
												getch();
												break;
											case 4: 
												break;
											case 0:
												exit(0);
												break;
										default: 
											clrscr();
											cout << "Invalid loop. Choose only from 1 to 3 choices.";
											getch();
											break;
										}
									}
									while (loop != 4);
									break;
								case 5: 
									do {
										clrscr();
										cout << "CASE 5 Sub menu loop\n";
										cout << "1- for\n";
										cout << "2- dow\n";
										cout << "3 - while\n";
										cout << "4 - back to loop menu\n";
										cout << "0 - exit\n";
										cout << "choose loop: ";
										cin >> loop;

										switch (loop) {
											case 1:
												clrscr();
												cout << "using loop";
												getch();
												break;
											case 2:
												clrscr();
												cout << "using do while";
												getch();
												break;
											case 3:
												clrscr();
												cout << "using while";
												getch();
												break;
											case 4: 
												break;
											case 0:
												exit(0);
												break;
										default: 
											clrscr();
											cout << "Invalid loop. Choose only from 1 to 3 choices.";
											getch();
											break;
										}
									}
									while (loop != 4);
									break;
								case 6: 
									do {
										clrscr();
										cout << "CASE 6 Sub menu loop\n";
										cout << "1- for\n";
										cout << "2- dow\n";
										cout << "3 - while\n";
										cout << "4 - back to loop menu\n";
										cout << "0 - exit\n";
										cout << "choose loop: ";
										cin >> loop;

										switch (loop) {
											case 1:
												clrscr();
												cout << "using loop";
												getch();
												break;
											case 2:
												clrscr();
												cout << "using do while";
												getch();
												break;
											case 3:
												clrscr();
												cout << "using while";
												getch();
												break;
											case 4: 
												break;
											case 0:
												exit(0);
												break;
										default: 
											clrscr();
											cout << "Invalid loop. Choose only from 1 to 3 choices.";
											getch();
											break;
										}
									}
									while (loop != 4);
									break;
								case 7: 
									do {
										clrscr();
										cout << "CASE 7 Sub menu loop\n";
										cout << "1- for\n";
										cout << "2- dow\n";
										cout << "3 - while\n";
										cout << "4 - back to loop menu\n";
										cout << "0 - exit\n";
										cout << "choose loop: ";
										cin >> loop;

										switch (loop) {
											case 1:
												clrscr();
												cout << "using loop";
												getch();
												break;
											case 2:
												clrscr();
												cout << "using do while";
												getch();
												break;
											case 3:
												clrscr();
												cout << "using while";
												getch();
												break;
											case 4: 
												break;
											case 0:
												exit(0);
												break;
										default: 
											clrscr();
											cout << "Invalid loop. Choose only from 1 to 3 choices.";
											getch();
											break;
										}
									}
									while (loop != 4);
									break;
								case 8: 
									do {
										clrscr();
										cout << "CASE 8 Sub menu loop\n";
										cout << "1- for\n";
										cout << "2- dow\n";
										cout << "3 - while\n";
										cout << "4 - back to loop menu\n";
										cout << "0 - exit\n";
										cout << "choose loop: ";
										cin >> loop;

										switch (loop) {
											case 1:
												clrscr();
												cout << "using loop";
												getch();
												break;
											case 2:
												clrscr();
												cout << "using do while";
												getch();
												break;
											case 3:
												clrscr();
												cout << "using while";
												getch();
												break;
											case 4: 
												break;
											case 0:
												exit(0);
												break;
										default: 
											clrscr();
											cout << "Invalid loop. Choose only from 1 to 3 choices.";
											getch();
											break;
										}
									}
									while (loop != 4);
									break;
								case 9: 
									break;
								case 0: 
									exit(0);
									break;
							default:
								clrscr();
								gotoxy(19,12);
		 						cout << "Invalid choice. Choose only from loop menu.";
								getch();
								break;
							}
					}
					while (loopchoice != 9);
					break;

			case 0:
				exit(0);
				break;
		default: 
			clrscr();
			gotoxy(19,12);
		 	cout << "Invalid choice. Choose only from 1 to 3 prog con.";
			getch();
			break;
		}
	}
	while (choice !=0);
getch();
}
