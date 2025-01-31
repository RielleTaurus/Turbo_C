#include<iostream.h>
#include<conio.h>
#include<process.h>

void main() {
	clrscr();
	int choice;
	do {
		clrscr();
		cout << "Sequence\n";
		cout << "Selection\n";
		cout << "Loop\n";
		cout << "Exit program\n";
		cin >> choice;
		
		switch(choice) {
			case 1: 	
				clrscr();
				cout << "Sequence prob";	
				getch();
				break;
			case 2: 	
				clrscr();
				cout << "Selection prob";	
				getch();
				break;
			case 3: 	
				clrscr();
				cout << "Loop prob";
					int choice;	
					do{
						clrscr();
						cout << "For\n;
						cout << "Do while\n;
						cout << "while\n;
						cin >> choice;
						
						switch(choice) {
							case 1: 	
								clrscr();
								cout << "for loop";
								getch();
								break;
							case 2: 	
								clrscr();
								cout << "do while loop";
								getch();
								break;
							case 3: 	
								clrscr();
								cout << "while loop";
								getch();
								break;
							case 0: 	
								clrscr();
								getch();
								break;
							default:
								clrscr();
								cout << "Invalid loop";
								getch();
								break;
						}
					} 
					while (choice != 0);		
			case 0: 
				clrscr();	
				exit(0);
				getch();
			default:
				clrscr();
				cout << "Invalid";
				getch();
				break;
		}


	}
	while (choice != 0);
}