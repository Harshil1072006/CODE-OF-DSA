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

void sorting(vector<int> arr1, vector<int> arr2, int n1, int n2)
{
    int j = n1 - 1, k = n2 - 1;
    int idx = n1 + n2 - 1;
    while (j >= 0 && k >= 0)
    {
        if (arr1[j] >= arr2[k])
        {
            arr1[idx] = arr1[j];
            idx--;
            j--;
        }
        else
        {
            arr1[idx--] = arr2[k--]; // we can do like this to make it smaller
        }
    }
    while (k >= 0)
    {
        arr1[idx--] = arr2[k--];
    }
    printarr(arr1, arr1.size());
}

int main()
{
    vector<int> arr1 = {1, 2, 3};
    arr1.resize(6); // to make the size 6 and have the elements as 3 in this after making the size 6 it will add the other elements as 0
    vector<int> arr2 = {4, 5, 6};
    sorting(arr1, arr2, 3, 3);
    return 0;
}
