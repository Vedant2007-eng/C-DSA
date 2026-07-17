#include<iostream>
using namespace std;
int main(){
    int num = 1;
    int* ptr = &num;

    cout << ptr << endl;
    cout << &num << endl;

    return 0;
}
