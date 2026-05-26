// Question --> finding the sum of digits of a number
#include <iostream>
using namespace std;
int SumOfDigit(int num){
    int digitSum = 0;

    while(num > 0){
        int lastDig = num % 10;
        num = num / 10;
        digitSum = digitSum + lastDig;
    }
    return digitSum;
}

int main(){
    int num;
    cout << "Enter the value of num : ";
    cin >> num;
    cout << SumOfDigit(num) << endl;
    return 0;
}
