#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        for(int j=0;j<n;j++)
        {
            if(j%2==0)
                cout<<a[j]<< " ";
        }
        cout<<endl;
    }
}