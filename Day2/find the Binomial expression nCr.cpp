// Question --> find the Binomial expression nCr
#include <iostream>
using namespace std;
int Binomial(int n, int r){
    int fact_n = 1;
    for(int i = 1; i <= n; i++){
        fact_n = fact_n * i;
    }
    int fact_r = 1;
    for(int j = 1; j <= r; j++){
        fact_r = fact_r * j;
    }
    int fact_nr = 1;
    for(int k = 1; k < n-r; k++){
        fact_nr = fact_nr * k;
    }
    int C;
    C = fact_n / (fact_r * fact_nr);
    return C;
}

int main(){
    int n;
    int r;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;
    int val = Binomial(n, r);
    cout << val << endl;
    return 0;
}
