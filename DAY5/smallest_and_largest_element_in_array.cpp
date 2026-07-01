#include <iostream>
#include <climits>
using namespace std;
int main(){
     int arr[5] = {1,2,3,4,-1};
     int smallest = INT_MAX;
     int greatest = INT_MIN;
     for(int i = 0; i <= 4; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
     }
     for(int i = 0; i <= 4; i++){
        if(arr[i] > greatest){
            greatest = arr[i];
        }
     }
     cout << "Smallest : " << smallest << endl;
     cout << "Greatest : " << greatest << endl;
}
