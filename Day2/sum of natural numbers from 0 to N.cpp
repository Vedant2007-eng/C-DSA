// Question --> sum of natural numbers from 0 to N
#include <iostream>
using namespace std;

SumN(int n){
    int sum = 0;

    for(int i = 0; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << SumN(n) << endl;
}
