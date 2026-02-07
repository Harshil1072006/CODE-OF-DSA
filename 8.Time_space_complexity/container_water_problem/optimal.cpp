#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height)
{
    int mw = 0; // answer
    int lp = 0, rp = height.size() - 1;

    while (lp < rp)
    {
        int w = rp - lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w * ht;
        mw = max(mw, currWater);

        height[lp] < height[rp] ? lp++ : rp--;
    }

    return mw;
}

int main()
{
    vector<int> height = {9, 1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << endl;
    cout << maxArea(height);
    cout << endl
         << endl;
    return 0;
}
