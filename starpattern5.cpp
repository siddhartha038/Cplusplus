#include<bits/stdc++.h>
using namespace std;

void starpattern5(int n)
{
    int i , j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<< " ";
        }
        for(j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(j=0;j<n-i-1;j++)
        {
            cout<< " ";
        }
        cout<<endl;
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
