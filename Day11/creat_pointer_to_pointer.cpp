#include <iostream>
using namespace std;
int main(){
    int num = 1;
    int* ptr = &num;
    int** parptr = &ptr;

    cout << &ptr << endl;
    cout << parptr << endl;

    return 0;
}
