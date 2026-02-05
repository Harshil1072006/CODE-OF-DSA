#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    cout << "Size of the vector before operations : " << vec.size() << endl;

    vec.push_back(10); // will add element at the end
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    cout << "AFTER PUSH BACK SIZE = " << vec.size() << endl;

    vec.pop_back(); // will remove last element from the vector

    cout << "after pop back elements are  : ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "AFTER POP BACK SIZE = " << vec.size() << endl;

    cout << "The first element is : " << vec.front() << endl; // will return first element
    cout << "The first element is : " << vec.back() << endl;  // will return last element

    vec.front() = 100; // will change first element to 100
    vec.back() = 200;  // will change last element to 200

    cout << "After changing , The first element is : " << vec.front() << endl;
    cout << "After changing , The first element is : " << vec.back() << endl;

    cout << "the value at index 1 is : " << vec.at(1) << endl; // will return value at index 1

    return 0;
}
