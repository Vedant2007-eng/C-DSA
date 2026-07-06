#include <iostream>
#include <climits>
using namespace std;
int main(){
    int st;
    int end;
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int arr[n];
    int MAX_SUM = INT_MIN;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
    cout << endl;

    for(st = 0; st < n; st++){
        int currSum = 0;
        for(end = st; end < n; end++){
            currSum += arr[end];
            MAX_SUM = max(currSum,MAX_SUM);
        }
    }
    cout << "The max sum is : " << MAX_SUM << endl;

    return 0;
}
