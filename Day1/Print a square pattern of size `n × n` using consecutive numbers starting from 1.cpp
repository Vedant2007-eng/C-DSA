// question --> Print a square pattern of size n × n using consecutive numbers starting from 1.
// 123
// 456
// 789
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << num;
            num = num + 1;
        }
        cout << endl;
    }
    return 0;
}
