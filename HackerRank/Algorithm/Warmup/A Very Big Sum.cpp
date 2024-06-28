#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,d,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>d;
        sum+=d;
    }
    cout<<sum<<endl;
}
