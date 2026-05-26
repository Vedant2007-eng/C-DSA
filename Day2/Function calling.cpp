#include <iostream>
using namespace std;

hellocall(){
    cout << "Hello\n";
    return 3;
}

int main(){
    cout << hellocall() << endl;
    int val = hellocall();
    cout << val << endl;
    return 0;
}
