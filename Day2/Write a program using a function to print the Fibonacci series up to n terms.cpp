//Question --> Write a program using a function to print the Fibonacci series up to n terms.
#include <iostream>
using namespace std;

// Function to print Fibonacci Series
void fibonacci(int n) {

    int a = 0;
    int b = 1;
    int c;

    cout << "Fibonacci Series : ";

    for(int i = 1; i <= n; i++) {

        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }
}

int main() {

    int n;

    cout << "Enter the number of terms : ";
    cin >> n;

    fibonacci(n);

    return 0;
}
