#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "\n===== VECTOR DECLARATIONS =====" << endl;

    // 1. Empty vector
    vector<int> v1;
    cout << "v1 size: " << v1.size() << endl;

    // 2. Vector with size
    vector<int> v2(5);
    cout << "v2: ";
    for (int x : v2)
        cout << x << " ";
    cout << endl;

    // 3. Vector with size and value
    vector<int> v3(5, 10);
    cout << "v3: ";
    for (int x : v3)
        cout << x << " ";
    cout << endl;

    // 4. Vector with initializer list
    vector<int> v4 = {1, 2, 3, 4};
    cout << "v4: ";
    for (int x : v4)
        cout << x << " ";
    cout << endl;

    // 5. Copy vector
    vector<int> v5(v4);
    cout << "v5 (copy of v4): ";
    for (int x : v5)
        cout << x << " ";
    cout << endl;

    // 6. Vector using range
    vector<int> v6(v4.begin(), v4.end());
    cout << "v6 (range copy): ";
    for (int x : v6)
        cout << x << " ";
    cout << endl;

    // 7. Push back (dynamic growth)
    vector<int> v7;
    v7.push_back(10);
    v7.push_back(20);
    v7.push_back(30);
    cout << "v7: ";
    for (int x : v7)
        cout << x << " ";
    cout << endl;

    // 8. 2D vector (matrix)
    vector<vector<int>> grid(3, vector<int>(4, 0));
    cout << "2D vector (3x4):" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << grid[i][j] << " ";
        cout << endl;
    }

    // 9. Jagged 2D vector
    vector<vector<int>> jagged = {
        {1, 2},
        {3, 4, 5},
        {6}};
    cout << "Jagged vector:" << endl;
    for (auto row : jagged)
    {
        for (int x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}