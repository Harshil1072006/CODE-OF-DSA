#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "===== VECTOR CREATION =====" << endl;

    // 1. Empty vector
    vector<int> v;
    cout << "Initial size: " << v.size() << endl;

    // 2. Vector with size
    vector<int> v2(5);
    cout << "v2 elements: ";
    for (int x : v2)
        cout << x << " ";
    cout << endl;

    // 3. Vector with size and value
    vector<int> v3(5, 10);
    cout << "v3 elements: ";
    for (int x : v3)
        cout << x << " ";
    cout << endl;

    // 4. Initializer list
    vector<int> v4 = {1, 2, 3};
    cout << "v4 elements: ";
    for (int x : v4)
        cout << x << " ";
    cout << endl;

    cout << "\n===== PUSH & POP =====" << endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "After push_back: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    v.pop_back();
    cout << "After pop_back: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    cout << "\n===== SIZE & CAPACITY =====" << endl;

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    cout << "\n===== ELEMENT ACCESS =====" << endl;

    cout << "Using [] : " << v[0] << endl;
    cout << "Using at(): " << v.at(1) << endl;
    cout << "Front element: " << v.front() << endl;
    cout << "Back element: " << v.back() << endl;

    cout << "\n===== INSERT =====" << endl;

    vector<int> ins = {1, 2, 4};
    ins.insert(ins.begin() + 2, 3);

    cout << "After insert: ";
    for (int x : ins)
        cout << x << " ";
    cout << endl;

    ins.insert(ins.begin(), 2, 100);
    cout << "After inserting multiple values: ";
    for (int x : ins)
        cout << x << " ";
    cout << endl;

    cout << "\n===== ERASE =====" << endl;

    ins.erase(ins.begin() + 1);
    cout << "After erase single element: ";
    for (int x : ins)
        cout << x << " ";
    cout << endl;

    ins.erase(ins.begin(), ins.begin() + 2);
    cout << "After erase range: ";
    for (int x : ins)
        cout << x << " ";
    cout << endl;

    cout << "\n===== RESIZE =====" << endl;

    vector<int> r = {1, 2, 3};
    r.resize(5);
    cout << "After resize(5): ";
    for (int x : r)
        cout << x << " ";
    cout << endl;

    r.resize(2);
    cout << "After resize(2): ";
    for (int x : r)
        cout << x << " ";
    cout << endl;

    cout << "\n===== ASSIGN =====" << endl;

    vector<int> a;
    a.assign(4, 9);
    cout << "After assign: ";
    for (int x : a)
        cout << x << " ";
    cout << endl;

    cout << "\n===== SWAP =====" << endl;

    vector<int> s1 = {1, 2};
    vector<int> s2 = {3, 4};

    s1.swap(s2);

    cout << "s1 after swap: ";
    for (int x : s1)
        cout << x << " ";
    cout << endl;

    cout << "s2 after swap: ";
    for (int x : s2)
        cout << x << " ";
    cout << endl;

    cout << "\n===== CLEAR & EMPTY =====" << endl;

    s1.clear();
    cout << "s1 size after clear: " << s1.size() << endl;

    if (s1.empty())
        cout << "s1 is empty" << endl;

    cout << "\n===== ITERATION =====" << endl;

    vector<int> it = {5, 10, 15};

    cout << "Using normal loop: ";
    for (int i = 0; i < it.size(); i++)
        cout << it[i] << " ";
    cout << endl;

    cout << "Using range-based loop: ";
    for (int x : it)
        cout << x << " ";
    cout << endl;

    cout << "\n===== 2D VECTOR =====" << endl;

    vector<vector<int>> grid(3, vector<int>(4, 0));

    grid[1][2] = 5;

    cout << "2D Vector elements:" << endl;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Rows: " << grid.size() << endl;
    cout << "Columns: " << grid[0].size() << endl;

    cout << "\n===== PROGRAM END =====" << endl;

    return 0;
}