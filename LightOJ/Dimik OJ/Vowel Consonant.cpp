#include<bits/stdc++.h>
using namespace std;
bool vckeck(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return true;
    else 
        return false;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        int len=s.size();
        string a,b;
        for(int i=0;i<len;i++)
        {
            if(vckeck(s[i])==true)
                a.push_back(s[i]);
            else if(s[i]!=' ')
                b.push_back(s[i]); 
        }
        cout<<a<<endl<<b<<endl;
    }
}