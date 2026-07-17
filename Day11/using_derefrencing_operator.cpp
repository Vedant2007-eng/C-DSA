#include <iostream>
using namespace std;
int main(){
    int num = 1;
    int* ptr = &num;
    int** parptr = &ptr;
    
    cout << *(&num) << endl;
    cout << *(ptr) << endl;
    cout << *(*(parptr));

    return 0;
}
