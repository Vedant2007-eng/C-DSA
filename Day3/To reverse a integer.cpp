//Question --> To reverse a integer
#include <iostream>
using namespace std;
int reverseno(int n){
    int rev = 0;
    while(n != 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}
int main(){
   int n;
   cout << "Enter the value of n : ";
   cin >> n;
   cout << reverseno(n) << endl; 
   return 0;
}
