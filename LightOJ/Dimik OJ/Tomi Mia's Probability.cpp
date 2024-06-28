// Add some code
#include<bits/stdc++.h>
#include<string>
#include<sstream>
using namespace std;

vector<string> devide(string str)
{
  vector<string> v;
stringstream s(str);
string word;

while (s >> word)
{
v.push_back(word);
}
return v;
}
long long fact(long long n)
{
   long long m=1;
    for(long long i=1;i<=n;i++)
    {
        m*=i;
    }
    return m;
}
int main()
{
   long long t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
      string s;
     getline(cin,s);
     vector<string> v= devide(s);
    map<string,long long> mp;
    for(long long i=0;i<v.size();i++)
    {
      mp[v[i]]=0;
    }
    
    for(long long i=0;i<v.size();i++)
    {
      mp[v[i]]++;
    }
    
    long long sub=1;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
      sub*=fact(it->second);
    }
    long long result= fact(v.size()) / sub;
    cout<<"1/"<<result<<endl;
    }
}



