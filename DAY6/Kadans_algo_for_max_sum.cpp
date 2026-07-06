#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int arr[n];
    int MAX_SUM = INT_MIN;
    int currSum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        currSum += arr[i];
        MAX_SUM = max(currSum,MAX_SUM);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "the Max sum is : " << MAX_SUM << endl;
    return 0;
}
