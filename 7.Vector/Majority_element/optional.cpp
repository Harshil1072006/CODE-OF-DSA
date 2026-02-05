#include <iostream>
#include <vector>
#include <algorithm> //for sorting
using namespace std;
int majorityElement(vector<int> &nums)
{

    // sorting
    sort(nums.begin(), nums.end());

    // frequency
    int n = nums.size();
    int freq = 1, ans = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n / 2)
        {
            return ans;
        }
    }
    return ans;
}

int main()
{

    vector<int> nums = {2, 2, 1, 1, 1, 1, 2};
    cout << endl
         << endl;
    cout << majorityElement(nums);
    cout << endl;

    return 0;
}
