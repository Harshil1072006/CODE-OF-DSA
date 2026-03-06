#include <iostream>
using namespace std;

// Function using pointer (pass by address)
void changeValue(int *x)
{
    *x = 100;
}

int main()
{

    cout << "===== BASIC POINTER =====" << endl;
    int a = 10;
    int *p = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer p stores: " << p << endl;
    cout << "Dereferencing p (*p): " << *p << endl;

    cout << "\n===== MODIFY USING POINTER =====" << endl;
    *p = 50;
    cout << "New value of a: " << a << endl;

    cout << "\n===== POINTER IN FUNCTION =====" << endl;
    changeValue(&a);
    cout << "Value of a after function call: " << a << endl;

    cout << "\n===== ARRAY & POINTER ARITHMETIC =====" << endl;
    int arr[3] = {10, 20, 30};
    int *arrPtr = arr;

    cout << "arr[0]: " << *(arrPtr + 0) << endl;
    cout << "arr[1]: " << *(arrPtr + 1) << endl;
    cout << "arr[2]: " << *(arrPtr + 2) << endl;

    cout << "\n===== DYNAMIC MEMORY (HEAP) =====" << endl;
    int *heapPtr = new int(5);
    cout << "Value in heap memory: " << *heapPtr << endl;

    delete heapPtr; // free memory
    heapPtr = nullptr;

    cout << "\n===== NULL POINTER =====" << endl;
    int *nullPtr = nullptr;
    cout << "Null pointer value: " << nullPtr << endl;

    cout << "\n===== DOUBLE POINTER =====" << endl;
    int b = 200;
    int *ptr1 = &b;
    int **ptr2 = &ptr1;

    cout << "Value of b: " << b << endl;
    cout << "Access using *ptr1: " << *ptr1 << endl;
    cout << "Access using **ptr2: " << **ptr2 << endl;

    return 0;
}