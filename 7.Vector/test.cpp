#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec{1, 2, 3, 4, 5};
    cout << "vec[10] = " << vec[10] << endl
         << endl;

    cout << "For ech loop output with val in the cout" << endl;
    for (int val : vec) // see the loop output is 1 2 3 4 5
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "For ech loop output with vec[i] in the cout" << endl;
    for (int i : vec) // see the loop output is 2 3 4 5 0
    {
        cout << vec[i] << " ";
    }
    cout << endl
         << endl;

    cout << "This is the thing like this vec(3,5) so the ans look like the sam value" << endl;
    vector<int> vec1(3, 5); // 3 elements with value 5 - all the value is 5 and the size is 3
    cout << vec1[0] << endl;
    cout << vec1[1] << endl;
    cout << vec1[2] << endl
         << endl;

    vector<char> chare {'a','b','c','d'}; // char vector
    cout << chare[0] << endl;
    cout << chare[1] << endl;
    cout << chare[2] << endl;
    cout << chare[3] << endl
         << endl;
         

    cout << "the size of the vector is " << vec.size() << endl; // size of the vector

    return 0;
}

// we can also use vectors instead of arrays bcz the size of the vectors are dynamic.
