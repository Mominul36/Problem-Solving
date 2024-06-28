#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long m=sqrt(n);
        if(m*m==n)
            cout<<"YES"<<endl;
        else 
            cout<< "NO"<<endl;
    }
}