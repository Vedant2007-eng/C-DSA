#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MajorityElement(vector<int> nums) {
    sort(nums.begin(), nums.end());

    int freq = 1;
    int ans = nums[0];
    int n = nums.size();

    for(int i = 1; i < n; i++) {
        if(nums[i] == nums[i-1]) {
            freq++;
        } else {
            freq = 1;
            ans = nums[i];
        }

        if(freq > n / 2) {
            return ans;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {1,2,1,2,3,2,4,1,4,4};

    int ans = MajorityElement(nums);
    cout << ans << endl;

    return 0;
}
