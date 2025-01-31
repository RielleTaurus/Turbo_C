#include<iostream.h>
#include<conio.h>
#include<string.h>

int main() {
    char correctUsername[] = "admin";
    char correctPassword[] = "password123";

    char enteredUsername[20];
    char enteredPassword[20];

    clrscr();  // Clear the screen

    cout << "Enter username: ";
    cin >> enteredUsername;

    cout << "Enter password: ";

    char ch;
    int i = 0;
    while ((ch = getch()) != 13) {  // 13 is the ASCII code for Enter key
        enteredPassword[i++] = ch;
        cout << '*';
    }
    enteredPassword[i] = '\0';  // Null-terminate the entered password

    // Check if the entered credentials are correct
    if (strcmp(enteredUsername, correctUsername) == 0 && strcmp(enteredPassword, correctPassword) == 0) {
        cout << "\nLogin successful!\n";
    } else {
        cout << "\nLogin failed. Please try again.\n";
    }

    getch();  // Wait for a key press before exiting
    return 0;
}
