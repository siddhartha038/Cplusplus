#include<bits/stdc++.h>
using namespace std;

void starpattern5(int n)
{
    int i , j;
    for(i=0;i<=n;i++)
    {
        char ch = 'A' + 1;
        for(j=0;j<=i;j++)
        {
            cout <<ch << " ";
        }
   }
}

int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<=t;i++)
    {
        int n ;
        cin>>n;
        starpattern5(n);
    }
return 0;
}
