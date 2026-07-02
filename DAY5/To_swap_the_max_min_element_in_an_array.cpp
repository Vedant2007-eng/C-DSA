#include <iostream>
#include <climits>
using namespace std;

int MaxNum(int arr[], int n, int Max){
    Max = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[Max]){
            Max = i;
        }
    }
    return Max;
}

int MinNum(int arr[], int n, int Min){
    Min = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[Min]){
            Min = i;
        }
    }
    return Min;
}

void swapNum(int arr[], int n, int Max, int Min, int Swaped){
    Max = MaxNum(arr, n, Max);
    Min = MinNum(arr, n, Min);

    swap(arr[Min], arr[Max]);
}

int main(){
    int n;
    int Max;
    int Min;
    int Swaped;

    cout << "Enter the value of n : ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Original array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    swapNum(arr, n, Max, Min, Swaped);

    cout << "The array after Swapping is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
