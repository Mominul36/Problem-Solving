#include<bits/stdc++.h>
using namespace std;
string permute_array(vector<long> a, vector<long> b,long n, long k)
{
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
     for(int i=0;i<n;i++)
     {
        bool bl=true;
        for(int j=0;j<b.size();j++)
        {
           if(a[i]+b[j]>=k)
           {
            b.erase(b.begin()+j);
            bl=false;
            break;
           }
        }
        if(bl==true)
        return "NO";
     }
     return "YES";

}
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n,k,d;
        cin>>n>>k;
        vector<long> a,b;
        for(int i=1;i<=n;i++)
        {
            cin>>d;
            a.push_back(d);
        }
        for(int i=1;i<=n;i++)
        {
            cin>>d;
            b.push_back(d);
        }
        cout<<permute_array(a,b,n,k)<<endl;
    }
}
