#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
     long long  n,sum=0;
       cin>>n;
       while(n)
       {
           sum=(sum*10) +(n%10);
           n/=10;
       }
       cout<<sum<<endl;
       
   }
}
