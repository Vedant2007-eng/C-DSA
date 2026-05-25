// Question --> Print a right-angled triangle pattern using consecutive numbers starting from `1`, where the numbers continue increasing across all rows.
// 1
// 23
// 456
// 78910
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << num;
            num++;
        }
        cout << endl;
    }
    return 0;
}
