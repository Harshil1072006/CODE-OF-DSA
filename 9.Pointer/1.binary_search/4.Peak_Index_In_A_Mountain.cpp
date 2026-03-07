#include <iostream>
#include <vector>
using namespace std;

int peak_element(vector<int> arr)
{
    int st = 1, end = arr.size() - 2;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr1 = {0, 1, 0};
    cout << peak_element(arr1) << endl;

    vector<int> arr2 = {0, 2, 1, 0};
    cout << peak_element(arr2) << endl;

    // not the mountain array
    //  vector<int> arr3 = {0, 3, 4, 5, 2, 10}; // if you find the max value than the and will be 5 but the ans is 3 in this case
    //  cout << peak_element(arr3) << endl;

    return 0;
}
