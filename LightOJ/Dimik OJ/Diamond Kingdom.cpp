#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
      int n,p;
      cin>>n>>p;
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=i;j++)
            cout<< p<< " ";
           cout<<endl;
       }

       for(int i=n-1;i>=1;i--)
       {
           for(int j=1;j<=i;j++)
            cout<< p<< " ";
           cout<<endl;
       }
       cout<<endl;
   }
}
