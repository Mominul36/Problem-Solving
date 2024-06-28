#include<bits/stdc++.h>
using namespace std;
int find_char(string s, char c,int p)
{ 
    for(int i=p;i<s.size();i++)
    {
        if(s[i]==c)
        return i;
    }
      return -1;
    
}
string fun(string s)
{
    string h="hackerrank";
    int a[10];
    int p=0;
    for(int i=0;i<h.size();i++)
    {
        a[i]= find_char(s,h[i],p);
        if(a[i]==-1)
        return "NO";
        else
        p=a[i]+1;
    }
    return "YES";
   
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
        cout<< fun(s)<<endl;
    }
    
}
