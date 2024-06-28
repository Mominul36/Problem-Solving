#include<bits/stdc++.h>
using namespace std;
vector<int> convert(string s)
{
    vector<int> a;
    int x;
    char c;
    stringstream var(s);
    while(var>>x)
    {
        a.push_back(x);
        var>>c;
    }
    return a;
}
int bintodec(int n)
{
    int i=0,x=0;
    while(n)
    {
        x = x + ((n%10)*pow(2,i));
        n=n/10;
        i++;
    }
    return x;
}
vector<int> bintodecip(string s)
{
    vector<int> a= convert(s);
    string ss="";
    for(int i=0;i<a.size();i++)
    {
        a[i]=bintodec(a[i]);
    }
    return a;
}
string check(vector<int> a, vector<int> b)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        {
            return "No";
        }
    }
    return "Yes";
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        string d,b;
        cin>>d>>b;
        vector<int> dec= convert(d);
        vector<int> bin= bintodecip(b);
        string s=check(dec,bin);
        //printf("Case %d: %s\n",i,s);
        cout<< "Case "<<i<<": "<<s<<endl;
    }
}
