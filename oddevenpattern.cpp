#include<bits/stdc++.h>
using namespace std;

void oddevenpattern(int n)
{
    int i , j;
    int start;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            start=1;
            
        }
        else
        {
            start=0;
            
        }
        for(j=0;j<=i;j++)
        {
            cout<<start<<" ";
            start = 1-start;
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
        oddevenpattern(n);
    }
return 0;
}
