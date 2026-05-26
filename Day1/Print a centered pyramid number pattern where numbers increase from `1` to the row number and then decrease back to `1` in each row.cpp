// Question --> Print a centered pyramid number pattern where numbers increase from `1` to the row number and then decrease back to `1` in each row.
//     1
//    121
//   12321
//  1234321
// 123454321
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the vale of n : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for(int k = 1; k <= i+1; k++){
            cout << k;
        }
        for(int l = i; l > 0; l--){
            cout << l;
        }
        cout << endl;
    }
    return 0;
}
