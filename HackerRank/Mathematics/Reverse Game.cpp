#include<bits/stdc++.h>
using namespace std;
long fun(long n, long k)
{
    long x=n-1, y=0;
    vector<long> a;
    for(long i=0;i<n;i++)
    {
        if(i%2==0)
        {
           a.push_back(x);
           if(x==k)
            return i;
            x--;
        }
        else
        {
           a.push_back(y);
           if(y==k)
            return i;
           y++;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,k;
        cin>>n>>k;
        cout<<fun(n,k)<<endl;
        //fun(n,k);
    }
}
