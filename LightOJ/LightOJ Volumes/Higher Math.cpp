#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       int a,b,c;
        cin>>a>>b>>c;
       int aa=a*a, bb=b*b, cc=c*c;
        if(aa==bb+cc || bb==aa+cc || cc==aa+bb)
            printf("Case %d: yes\n",i);
        else 
            printf("Case %d: no\n",i);
        
    }
}