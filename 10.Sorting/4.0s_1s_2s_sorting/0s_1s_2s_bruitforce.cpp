#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printarr(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortThings(vector<int> nums, int n)
{
    sort(nums.begin(), nums.end());
    printarr(nums, n);
}

int main()
{
    vector<int> arr1 = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    sortThings(arr1, arr1.size());
    return 0;
}
