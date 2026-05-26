// Question --> Use a parameters for sum of two numbers and to find the greatest of them
#include <iostream>
using namespace std;

sum(int a, int b){
    int s = a + b;
    return s;
}

MinOfTwo(int a, int b){
    if(a > b){
        cout << a  << " is  greatest" << endl;
    }
    else{
        cout << b  << " is  greatest" << endl;
    }
}

int main(){
    cout << sum(10, 5) << endl;
    cout << MinOfTwo(2,20) << endl;
    return 0;
}
