#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,n;
    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>n;
        cout<< "Case "<<i<<":";
        for(int j=1;j<=n;j++)
        {
            if(n%j==0)
                cout<< " "<<j;
        }
        cout<<endl;
    }
}
