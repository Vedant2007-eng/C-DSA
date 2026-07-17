#include <iostream>
using namespace std;
int main(){
    int num = 1;
    int* ptr = &num;
    
    cout << *(&num) << endl;
    cout << *(ptr) << endl;

    return 0;
}
