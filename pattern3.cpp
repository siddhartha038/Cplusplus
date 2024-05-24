#include<bits/stdc++.h>
using namespace std;

void pattern3(int n)
{
    int i , j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<< j << " ";
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
        pattern3(n);
    }
return 0;
}
