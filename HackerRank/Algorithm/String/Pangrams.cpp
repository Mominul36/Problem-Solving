#include<bits/stdc++.h>
using namespace std;
string Pangram(string s)
{
    map<char,int> a;
    for(int i=65;i<=122;i++)
    {
        a[i]=0;
    }
    for(int i=0;i<s.size();i++)
    {
        a[s[i]]++;
    }
    for(int i=65;i<=90;i++)
    {
        if(a[i]==0 && a[i+32]==0)
        return "not pangram";
    }
    return "pangram";
}
int main()
{
        string s;
        getline(cin,s);
        cout<< Pangram(s)<<endl;
}
