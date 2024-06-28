#include<bits/stdc++.h>
using namespace std;
bool stringcheck(string a, string b)
{
    int len=min(a.length(), b.length());
    for(int i=0;i<len;i++)
    {
        if(a[i]==b[i])
            continue;
        if(a[i]<b[i])
            return true;
        else
            return false;
    }

    if(a.length()<b.length() || a.length()==b.length())
        return true;
    else
        return false;
}
vector<string> stringsort(vector<string> a)
{
   int len=a.size();
   for(int i=0;i<len;i++)
   {
       for(int j=0;j<len-1;j++)
       {
           if(stringcheck(a[j],a[j+1])==false)
            swap(a[j],a[j+1]);
       }
   }
   return a;
}
int main()
{
   int t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
      int n;
      cin>>n;
      vector<string> a;
      string s;
      for(int j=1;j<=n;j++)
      {
          cin>>s;
          a.push_back(s);
      }
     a=stringsort(a);
      for(int j=0;j<n;j++)
      {
          cout<< a[j]<<endl;
      }
   }
}
