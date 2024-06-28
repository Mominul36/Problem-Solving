#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b)
{
   if(a.size()<b.size())
   return true;
   if(a.size()>b.size())
   return false;

   return a<b;
}
int main()
{
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];

    sort(v.begin(),v.end(),cmp); 

    for(auto s:v)
    cout<<s<<endl;
    //cout<<endl;
}
