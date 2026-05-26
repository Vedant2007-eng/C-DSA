// Question --> Print a butterfly star pattern where stars increase in the upper half and decrease in the lower half, forming a butterfly shape.
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    // Upper Half
    for(int i = 0; i < n; i++) {

        // Left Stars
        for(int j = 0; j < i + 1; j++) {
            cout << "*";
        }

        // Spaces
        for(int k = 0; k < 2 * (n - i - 1); k++) {
            cout << " ";
        }

        // Right Stars
        for(int l = 0; l < i + 1; l++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower Half
    for(int i = n - 1; i >= 0; i--) {

        // Left Stars
        for(int j = 0; j < i + 1; j++) {
            cout << "*";
        }

        // Spaces
        for(int k = 0; k < 2 * (n - i - 1); k++) {
            cout << " ";
        }

        // Right Stars
        for(int l = 0; l < i + 1; l++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
