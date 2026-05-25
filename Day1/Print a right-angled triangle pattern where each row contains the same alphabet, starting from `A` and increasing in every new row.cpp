// Question --> Print a right-angled triangle pattern where each row contains the same alphabet, starting from `A` and increasing in every new row.
// A
// BB
// CCC
#include <iostream>
using namespace std;
int main(){
    int n = 3;
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << ch;
        }
        cout << endl;
        ch = ch + 1;
    }
    return 0;
}
