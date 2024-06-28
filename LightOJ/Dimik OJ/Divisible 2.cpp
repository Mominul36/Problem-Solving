#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,i,d;
        cin>>a>>b>>c;
        i=a*b;
        d=i;
        while(i<=c)
        {
            cout<<i<<endl;
            i=i+d;
        }
        cout<<endl;
    }
}