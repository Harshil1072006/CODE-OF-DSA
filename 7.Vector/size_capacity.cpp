#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    cout << "the size of the vector is " << vec.size() << endl;         // 3
    cout << "the capacity of the vector is " << vec.capacity() << endl; // 4

    return 0;
}
