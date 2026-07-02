#include <iostream>
using namespace std;
int sumOfNumber(int arr[], int n, int sum){
    sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int MultiplyOfNumber(int arr[], int n, int multiply){
    multiply = 1;
    for(int i = 0; i < n; i++){
        multiply = multiply*arr[i];
    }
    return multiply;
}
int main(){
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    int arr[n];
    int sum;
    int multiply;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
    cout << endl;
    cout << "Sum of every elements is : " << sumOfNumber(arr, n, sum) << endl;
    cout << "Multiplication of every elements is : " << MultiplyOfNumber(arr, n, multiply) << endl;
    return 0;
}
