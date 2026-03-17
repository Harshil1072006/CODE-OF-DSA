#include <iostream>
#include <vector>
using namespace std;

void printarr(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortThings(vector<int> nums, int n) //O(2n) = //O(n)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)//O(n)
    {

        if (nums[i] == 0)
            count0++;
        else if (nums[i] == 1)
            count1++;
        else
            count2++;
    }
    int idx = 0; //O(n)
    for (int i = 0; i < count0; i++)
    {
        nums[idx++] = 0;
    }
    for (int i = 0; i < count1; i++)
    {
        nums[idx++] = 1;
    }
    for (int i = 0; i < count2; i++)
    {
        nums[idx++] = 2;
    }

    printarr(nums, n);
}

int main()
{
    vector<int> arr1 = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    sortThings(arr1, arr1.size());
    return 0;
}
