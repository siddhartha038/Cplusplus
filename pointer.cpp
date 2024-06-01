#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 5;
    int *ptr = &num;

    cout << *ptr << endl;
    cout << ptr << endl;

    cout << "Size of num is:" << sizeof(num);
    cout << "Size of the pointer is:" << sizeof(*ptr)<< endl;

    (*ptr)++;
    cout << "Value of num is:" << num << endl;

    // Copying a pointer 

    int *q = ptr;
    cout << "Address of p" << ptr << "Address of q " <<  q << endl;
    cout << "Value of p" << *ptr << "Value of q" << *q << endl;


return 0;
}