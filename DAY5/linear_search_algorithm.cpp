#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            cout << "found at index : " << i << endl;
        }
    }
    return -1;
}
int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cout << arr[i];
    }
    cout << endl;
    int target;
    cout << "Target element : ";
    cin >> target;
    linearSearch(arr , n, target);
    return 0;
}
