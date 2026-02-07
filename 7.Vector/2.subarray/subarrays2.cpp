#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n = 7;
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int maxsum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        int CurrentSum = 0;
        for (int end = st; end < n; end++)
        {
            CurrentSum += arr[end];
            maxsum = max(CurrentSum, maxsum);
        }
        cout << endl;
    }

    cout << "max sum is: " << maxsum;

    return 0;
}
