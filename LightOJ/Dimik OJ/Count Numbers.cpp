#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,c,t,i;
    string a;
   cin>>t;
   for(i=1;i<=t;i++)
   {
       c=0;
       if(i==1)
        cin.ignore();
       getline(cin,a);
       while(a.size())
       {
           if(a.front()!=' ')
           {
               a.erase(a.begin());
           }
           else
           {
               c++;
               while(a.size())
               {
                   if(a.front()==' ')
                   {
                      a.erase(a.begin());
                   }
                   else
                    break;
               }
           }

       }
       cout<<c+1<<endl;
   }
    return 0;
}