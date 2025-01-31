#include <iostream.h>

void main() {
    int x, div = 2;

    // Input
    cout << "Enter a number: ";
    cin >> x;

    // Initialize loop
    do {
        // Check if x is divisible by div
        if (x % div == 0) {
            // Display result and exit
            cout << x << " is not a prime number." << endl;
            return;
        }

        // Check if x is equal to div
        if (x == div) {
            // Display result and exit
            cout << x << " is a prime number." << endl;
            return;
        }

        // Increment div
        div++;

    } while (x > div); // Continue looping as long as x is greater than div

    // Display result for large prime numbers
    cout << x << " is a prime number." << endl;
}
