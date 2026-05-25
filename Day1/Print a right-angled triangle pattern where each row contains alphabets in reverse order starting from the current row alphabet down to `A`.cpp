// Question --> Print a right-angled triangle pattern where each row contains alphabets in reverse order starting from the current row alphabet down to `A`.
// A
// AB
// ABC
// ABCD
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(char ch = 'A'+i; ch >= 'A'; ch--){
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
