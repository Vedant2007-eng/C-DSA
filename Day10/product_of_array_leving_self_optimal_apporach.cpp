#include <iostream>
#include <vector>
using namespace std;
vector<int> Product(vector<int> nums){
    int n = nums.size();
    vector<int> prefix(n, 1);
    vector<int> sufix(n, 1);
    vector<int> ans(n, 1);

    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i-1] * nums[i-1];
    }
    for(int i = n-2; i >= 0; i--){
        sufix[i] = sufix[i+1] * nums[i+1];
    }
    for(int i = 0; i < n; i++){
        ans[i] = sufix[i] * prefix[i];
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> ans = Product(nums);
    
    for(int x : ans){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
