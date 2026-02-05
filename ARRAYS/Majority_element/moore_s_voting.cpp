#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int freq = 0;
    int ans = 0;
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans = nums[i])
        {
            freq++;
        }

        else
        {
            freq--;
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
