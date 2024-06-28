#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,a,b,i,sum;
   cin >> t;
   for(i=1;i<=t;i++)
   {
       cin>>a>>b;
       sum=19 + (abs(a-b) + a)*4;
       printf("Case %d: %d\n",i,sum);
   }
}
