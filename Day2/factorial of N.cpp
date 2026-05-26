// Question --> factorial of N
#include <iostream>
using namespace std;
int factorial(int N){
    int fact = 1;
    for(int i = 1; i <= N; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int N;
    cout << "Enter the value of N : ";
    cin >> N;
    cout << factorial(N) << endl;
    return 0;
}
