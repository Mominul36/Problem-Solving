#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    vector<long long> a;
    for(long long i=0;i<n;i++)
    {
        long long d;
        cin>>d;
        a.push_back(d);
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    long long sum=0;
    for(long long i=0;i<n;i++)
    {
        sum+= pow(2,i) * a[i];
    }
    cout<<sum<<endl;
}
