// Question --> Print an inverted right-angled triangle pattern using alphabets, where each row contains the same alphabet and the number of alphabets decreases in every row.
// AAAAA
//  BBBB
//   CCC
//    DD
//     E
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        char ch = 'A';
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int k = 0; k < n-i; k++){
            cout << char('A' + i);
        }
        ch++;
        cout << endl;
    }
    return 0;
}
