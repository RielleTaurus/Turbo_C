#include<iostream.h>
#include<conio.h>

void main() {
	char user[100];
	char pass[100];

do {
	cout << "Username: ";
	cin >> user;

	cout << "Password: ";
	cin >> pass;
	
	if (user == "Gab") {
		if (pass == "Gab") {
			cout << "Logged in" << endl;
		}

		else {
			cout << "Enter correct password" << endl;
		}

	}
	else {
		cour << "Enter correct password" << endl;
	}

} while (username ! = "gabo" || pass != "Gab")

}