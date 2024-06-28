#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
      int n;
        cin>>n;
        vector<int> a;
        for(int j=1;j<=n;j++)
        {
            int d;
            cin>>d;
            a.push_back(d);
        }
        if(a.front()>a.back())
            reverse(a.begin(),a.end());
        int c=0;
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                c++;
                break;
            }
        }
        if(c==0)
            cout<< "YES"<<endl;
        else 
            cout<< "NO"<<endl;
    }
}


