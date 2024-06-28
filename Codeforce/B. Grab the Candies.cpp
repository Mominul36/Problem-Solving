#include<bits/stdc++.h>
using namespace std;
string fun(vector<int> a)
{
    long even=0, odd=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]%2==0)
        even+=a[i];
        else 
        odd+=a[i];
    }
    if(even>odd)
    return "YES";
    else 
    return "NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        vector<int> a;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>d;
            a.push_back(d);
        }
      cout<< fun(a)<<endl;
    }

}
