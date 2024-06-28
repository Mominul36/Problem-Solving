#include<bits/stdc++.h>
using namespace std;
long long int fact(long long int n)
{
    long long int mul=1,i;
    for(i=1;i<=n;i++)
        mul*=i;
        return mul;
}

int main()
{
   long long  int t,i,d,n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        cout<<fact(n)<<endl;
    }
    return 0;
}