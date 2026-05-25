// Question --> Print a right-angled triangle pattern where each row contains numbers in decreasing order starting from the row number down to `1`.
// 1
// 21
// 321
// 4321
// 54321
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j > 0; j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
