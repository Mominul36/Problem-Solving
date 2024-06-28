#include <bits/stdc++.h>
using namespace std;

int main() {
  int t,i,s;
      cin>>t;
    for(i=1;i<=t;i++)
    {
        int sum=0;
        //cout<<endl;
        cin>>s;
        int a[s];
        for(int j=0;j<s;j++)
        {
            cin>>a[j];
            if(a[j]>0)
                sum+=a[j];
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
