#include<bits/stdc++.h>
using namespace std;
vector<int> factorial(int n)
{
    vector<int> res;
    res.push_back(1);
    for(int i=2;i<=n;i++)
    {
        int car=0;
        for(int j=0;j<res.size();j++)
        {
            int val=res[j]*i+car;
            res[j]=val%10;
            car=val/10;
        }
        while(car!=0)
        {
            res.push_back(car%10);
            car/=10;
        }
    }
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
   vector<int> a;
   int n,c,t,i;
   cin>>t;
   for(i=1;i<=t;i++)
   {
       c=0;
      cin>>n;
    a=factorial(n);
   while(1)
   {
       if(a.back()!=0)
        break;
       else
       {
          c++;
          a.pop_back();
       }
   }
   cout<<c<<endl;
   }
    return 0;
}

