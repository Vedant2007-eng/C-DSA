// Question --> Print a right-angled triangle pattern using consecutive uppercase alphabets starting from `A`, where the alphabets continue increasing across all rows.
// A
// BC
// DEF
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    return 0;
}
