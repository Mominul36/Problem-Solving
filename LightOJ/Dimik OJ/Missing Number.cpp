#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long d,n,sum=0,s;
        cin>>n;
        for(int j=1;j<n;j++)
        {
            cin>>d;
            sum+=d;
        }
        s=(n*(n+1))/2;
        cout<< s-sum<<endl;
        
    }
}