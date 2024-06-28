#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=1;k<=t;k++)
    {
        long long w,n,m;
        cin>>w;
        if(w%2!=0)
        {
            printf("Case %d: Impossible\n",k);
            continue; 
        }
           
        
            n=w/2;
            m=2;

            while(n%2==0)
            {
                n=n/2;
                m=m*2;
            }
            printf("Case %d: %lld %lld\n",k,n,m);
        
    }
}
