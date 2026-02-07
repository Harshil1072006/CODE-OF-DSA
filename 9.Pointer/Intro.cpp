#include <iostream>
using namespace std;

int main()
{
    //                      //
    // pointer intro things //
    //                      //
    int a = 10;
    int *ptr = &a;
    int **parptr = &ptr;

    // * does the value
    // & does the point of the address
    cout << endl;
    cout << "a        = " << a << endl;
    cout << "ptr      = " << ptr << endl; // will see the address of a and it will start with 0x ---> which means its the address
    cout << "parptr   = " << parptr << endl;
    cout << "*ptr     = " << *ptr << endl; // CALLED AS DEREFERENCE
    cout << "*parptr  = " << *parptr << endl;
    cout << "**parptr = " << **parptr << endl
         << endl;

    // * does the value
    // & does the point of the address
    cout << "--------------------------------------------" << endl;
    //              //
    // NULL POINTER //
    //              //

    int *null = NULL;
    int **bla = NULL;
    cout << null << endl;
    cout << bla << endl;
    // cout << *bla << endl; //give us the error if Segmentation fault (core dumped)
    cout << "--------------------------------------------" << endl;
    //               //
    // ARRAY POINTER //
    //               //

    int arr[] = {1, 2, 3, 4, 5, 6};
    cout << arr << endl; // when u try to print the array like this that array is the pointing the location of the first index's location.
    // like the pointer does thats why we call it the array pointer
    cout << *arr << endl; // pointer => 1
    // we just get that this is pointing the first index so after doing the * it will give me the value of array

    int b = 15;
    // arr = &b; // this will give me an error
    //  array pointer is not the changable value.
    cout << "--------------------------------------------" << endl;

    //                     //
    //  POINTER ARITHMETIC //
    //                     //

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;
    ptr--;
    cout << ptr << endl;
    cout << "--------------------------------------------" << endl;
    // you can print the array like this also
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3) << endl;
    cout << *(arr + 4) << endl;

    return 0;
}
