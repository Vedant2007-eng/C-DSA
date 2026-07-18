#include <iostream>
using namespace std;
void changeA(int &b){
    b = 20;
}
int main(){
    int a = 1;
    changeA(a);
    cout << a << endl;

    return 0;
}
