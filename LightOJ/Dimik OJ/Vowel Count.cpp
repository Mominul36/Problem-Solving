#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,i,c;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        c=0;
        if(i==1)
            cin.ignore();
        getline(cin,s);
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' ||      s[j]=='U' || s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' ||      s[j]=='u')
                c++;
        }
        printf("Number of vowels = %d\n",c);
    }
}