#include <iostream>
using namespace std;
void UniqueEle(int arr[], int n){
    for(int i = 0; i < n; i++){
        bool Isunique = true;

        for(int j = 0; j < n; j++){
            if(i != j && arr[i] == arr[j]){
                Isunique = false;
                break;
            }
        }
        if(Isunique == true){
            cout << arr[i] << "";
        }
    }
}
int main(){
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
    UniqueEle(arr, n);
    return 0;
}
