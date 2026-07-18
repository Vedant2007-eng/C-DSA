#include <iostream>
using namespace std;

int BinarySearch(int nums[], int n, int target)
{
    int st = 0;
    int end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (target > nums[mid])
        {
            st = mid + 1;
        }
        else if (target < nums[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    int nums[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int n = sizeof(nums) / sizeof(nums[0]);

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int index = BinarySearch(nums, n, target);

    if (index != -1)
    {
        cout << "Element found at index: " << index << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}
