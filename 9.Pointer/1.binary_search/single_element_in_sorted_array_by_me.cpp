#include <iostream>
#include <vector>
using namespace std;
int singleNonDuplicate(vector<int> &nums)
{
    int ans;
    int n = nums.size();
    if (n == 1)
    {
        ans = nums[0];
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                i++;
            }
            else
            {
                return ans = nums[i];
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums1 = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    vector<int> nums2 = {3, 3, 7, 7, 10, 11, 11};
    vector<int> nums3 = {1};

    cout << singleNonDuplicate(nums1) << endl;
    cout << singleNonDuplicate(nums2) << endl;
    cout << singleNonDuplicate(nums3) << endl;
    return 0;
}
