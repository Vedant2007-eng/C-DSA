// Question --> print letters in the given format
// ABCD
// ABCD
// ABCD
// ABCD
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        char ch = 'A'; // for 1st letter
        for(int j = 1; j <= n; j++){
            cout << ch;
            ch = ch + 1; // character + 1 = character ==> A = 65 : 65 + 1 = 66 and 66 = B
        }
        cout << endl;
    }
    return 0;
}
