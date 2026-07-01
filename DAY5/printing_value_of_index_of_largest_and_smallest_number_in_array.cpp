#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[5] = {1,-1,2,5,7};
    int smallest = INT_MAX;
    int greatest = INT_MIN;
    int i , j , a , b;

    for(i = 0; i < 5; i++){
        if(smallest > arr[i]){
            smallest = arr[i];
            a = i;
        }
    }
    for(j = 0; j < 5; j++){
        if(greatest < arr[j]){
            greatest = arr[j];
            b = j;
        }
    }
    cout << "Smallest : " << smallest << endl;
    cout << "Index No : " << a << endl;
    cout << "Greatest : " << greatest << endl;
    cout << "Index No : " << b << endl;
}
