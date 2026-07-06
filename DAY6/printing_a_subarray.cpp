#include <iostream>
using namespace std;
int main(){
    int st;
    int end;
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    for(st = 0; st < n; st++){
        for(end = st; end <= n-1; end++){
            for(int i = st; i < end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
