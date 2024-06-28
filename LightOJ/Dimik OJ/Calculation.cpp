#include<bits/stdc++.h>
using namespace std;
int func(int a, int b, int c)
{
    int rem=1;
    for(int i=1;i<=b;i++)
    {
        rem = (rem*a)%c;
    }
    return rem;
}
int main()
{
   int t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
       int a,b,c,rem;
       cin>>a>>b>>c;
       rem=func(a,b,c);
       printf("Result = %d\n",rem);


   }
}
