#include <iostream>
#include <vector>
using namespace std;

int MajorityElement(vector<int> &nums)
{
    int n = nums.size();
    for (int val : nums)
    {
        int freq = 0;
        for (int el : nums)
        {
            if (el == val)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            return val;
        }
    }
    return -1; // kuch nahi mila ---- if you dont find thr answer it will not give the error.+-
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 1, 2};
    cout << endl
         << endl;
    cout << MajorityElement(nums);
    cout << endl;

    return 0;
}
