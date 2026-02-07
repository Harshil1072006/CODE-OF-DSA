#include <iostream>
#include <vector>
using namespace std;

vector<int> produtOfArray(vector<int> &nums)
{

    int n = nums.size();
    vector<int> ans(n, 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            ans[i] *= nums[j];
        }
    }

    return ans;
}

int main()
{

    vector<int> number = {1, 2, 3, 4};
    vector<int> result = produtOfArray(number);

    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
