#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        string s;
        cin>>s;
        int len=s.length();
        for(int j=0;j<len;j++)
        {
            if(s[j]=='L')
                s[j]=s[j-1];
            if(s[j]=='R')
                s[j]=s[j+1];
        }
        cout<< s<<endl;
    }
}
