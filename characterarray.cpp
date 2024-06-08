
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << " is the address of the array" << endl;
    cout << ch << " is the value of the character array" << endl;

    char *c = &ch[0];
    cout << c << endl;

return 0;

}
