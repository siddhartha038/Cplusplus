
#include <bits/stdc++.h>
using namespace std;

void update ( int **ptr)
{
    p = p + 1;
}

int main()
{
    int i =5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    
    cout << endl << endl; 
    cout << "Double pointer has been created" << endl;

    cout << "printing ptr " << ptr << endl ;
    cout << "address of ptr " << &ptr << endl;
    cout << "printing value of p " << *ptr << endl;

    cout << *ptr2 << endl;
    cout << endl << endl;
}
