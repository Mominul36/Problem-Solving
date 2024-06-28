#include<bits/stdc++.h>
using namespace std;
long fun(string s)
{
    long c;
    if(s.front()=='0')
        return 0;
    if(s.front()=='?')
        c=9;
    else
        c=1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]=='?')
            c=c*10;
    }
    return c;
}
int main()
{
   int t;
   cin>>t;
   cin.ignore();
   while(t--)
   {
       string s;
       cin>>s;
       cout<<fun(s)<<endl;

   }
}
