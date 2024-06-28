#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        long long int x,k,sum=0;
        cin>>x>>k;
        for(int j=0;j<=k;j++)
        {
            sum+=pow(x,j);
        }
        cout<< "Result = "<<sum<<endl;
    }
}