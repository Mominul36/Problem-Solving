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
            if(s[j]==' ')
                c++;
        }
        printf("Count = %d\n",c+1);
    }
}