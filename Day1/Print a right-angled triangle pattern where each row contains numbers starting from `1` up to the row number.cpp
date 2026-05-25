// Question --> Print a right-angled triangle pattern where each row contains numbers starting from `1` up to the row number.
// 1
// 12
// 123
// 1234
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 1; j < i+1; j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
