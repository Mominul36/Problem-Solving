#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        int n,p,q;
        cin>>n>>p>>q;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];

        sort(a,a+n);

        int cnt=0,sum=0;
        for(int i=0;i<n;i++)
        {
          cnt++;
          sum+=a[i];
          if(cnt>p || sum>q)
          {
            cnt--;
            break;
          }
        }
     printf("Case %d: %d\n",k,cnt);

    }
}