#include <iostream>
#include <vector>
using namespace std;
int singleNonDuplicate(vector<int> &nums)
{
    int left = 0, right = nums.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        // Make sure mid is even
        if (mid % 2 == 1)
        {
            mid--;
        }

        if (nums[mid] == nums[mid + 1])
        {
            left = mid + 2; // single is on right side
        }
        else
        {
            right = mid; // single is on left side (including mid)
        }
    }

    return nums[left];
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

// class Solution
// {
// public:
//     int singleNonDuplicate(vector<int> &nums)
//     {
//         int n = nums.size();
//         int ans, left = 0, right = n - 1;

//         while (left <= right)
//         {
//             int mid = left + (right - left) / 2;
//             if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
//             {
//                 return nums[mid];
//             }
//             if (mid % 2 == 0)
//             {
//                 if (nums[mid - 1] == nums[mid])
//                 {
//                     right = mid - 1;
//                 }
//                 else
//                 {
//                     left = mid + 1;
//                 }
//             }
//             else
//             {
//                 if (nums[mid - 1] == nums[mid])
//                 {
//                     right = mid + 1;
//                 }
//                 else
//                 {
//                     left = mid - 1;
//                 }
//             }
//         }
//         return -1;
//     }
// };