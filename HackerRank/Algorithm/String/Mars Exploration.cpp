#include<bits/stdc++.h>
using namespace std;
int fun(string s)
{
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(i%3==1)
        {
            if(s[i]!='O')
            c++;
        }
        else{
            if(s[i]!='S')
            c++;
        }
    }
    return c;
}
int main()
{
    string s;
    cin>>s;
    cout<< fun(s)<<endl;
}
