#include<iostream>
using namespace std;
int main(){
    float num = 1;
    float* ptr = &num;

    cout << ptr << endl;
    cout << &num << endl;

    return 0;
}
