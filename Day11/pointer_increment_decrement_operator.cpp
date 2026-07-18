#include <iostream>
using namespace std;
int main(){
    int n = 10;
    int* ptr = &n;
    
    cout << ptr << endl;
    cout << ptr++ << endl;
    cout << ptr-- << endl;

    return 0;
}
