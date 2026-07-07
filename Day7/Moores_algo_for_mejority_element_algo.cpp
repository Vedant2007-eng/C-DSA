#include <iostream>
#include <vector>
using namespace std;

int Moores(vector<int> nums) {
    int freq = 0;
    int ans = 0;
    int n = nums.size();

    for(int i = 0; i < n; i++) {
        if(freq == 0) {
            ans = nums[i];
        }

        if(ans == nums[i]) {
            freq++;
        }
        else {
            freq--;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1,1,1,2,3,1,1};

    int ans = Moores(nums);
    cout << ans << endl;

    return 0;
}
