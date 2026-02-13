#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
    int mw = 0; // answer

    for (int i = 0; i < height.size(); i++)
    {
        for (int j = 1; j < height.size(); j++)
        {
            int w = j - i;
            int ht = min(height[i], height[j]);
            int currwater = w * ht;

            mw = max(currwater, mw);
        }
    }
    return mw;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << endl;
    cout << maxArea(height);
    cout << endl
         << endl;

    return 0;
}
