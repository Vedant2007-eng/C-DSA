#include <iostream>
#include <vector>
using namespace std;

int MajorityElement(vector<int> nums) {
    int n = nums.size();

    for(int val : nums) {
        int frequency = 0;

        for(int el : nums) {
            if(el == val) {
                frequency++;
            }
        }

        if(frequency > n / 2) {
            return val;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {2,2,1,2,3,2,2};

    int ans = MajorityElement(nums);
    cout << ans << endl;

    return 0;
}
