#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowdPages)
{
    int stu = 1, pages = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowdPages)
        {
            return false;
        }

        if (pages + arr[i] <= maxAllowdPages)
        {
            pages += arr[i];
        }
        else
        {
            stu++;
            pages = arr[i];
        }
    }
    return stu > m ? false : true;
}

int splitArray(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int ans = -1;
    int st = 0, end = sum;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums1 = {7, 2, 5, 10, 8};
    vector<int> nums2 = {1, 2, 3, 4, 5};
    vector<int> nums3 = {1};

    cout << splitArray(nums1, 5, 2) << endl;
    cout << splitArray(nums2, 5, 2) << endl;
    cout << splitArray(nums3, 1, 1) << endl;
    return 0;
}
