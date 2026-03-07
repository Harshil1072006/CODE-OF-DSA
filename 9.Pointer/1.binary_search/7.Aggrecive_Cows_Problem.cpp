#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int minAllowdDistance) // O(n)
{
    int cows = 1;
    int lastStallPosition = arr[0];

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] - lastStallPosition) >= minAllowdDistance)
        {
            cows++;
            lastStallPosition = arr[i];
        }
        if (cows == m)
            return true;
    }
    return false;
}

int getDistance(vector<int> &arr, int n, int m) // O(log(range) * n)
{
    sort(arr.begin(), arr.end()); // O(nlogn)
    int ans = -1, st = arr[0], end = arr[n - 1];
    while (st <= end) // O(log(range) * n)
    {
        int mid = st + (end - st) / 2;
        for (int i = 0; i < n; i++)
        {
            if (isPossible(arr, n, m, mid))
            {
                ans = mid;
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 8, 4, 9};
    int n = 5, m = 3;
    cout << getDistance(nums, n, m);
    return 0;
}
