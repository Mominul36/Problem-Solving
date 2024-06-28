#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    string a,b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        b.clear();
        if(i==1)
            cin.ignore();
        cin>>a;
        for(int j=0;j<a.size();j++)
        {
           int d=a[j]-64;
            if(d>=0 && d<=9)
            {
                b.push_back(d+48);
            }
            else
            {
                char m,n;
                n=(d%10)+48;
                m=(d/10)+48;
                b.push_back(m);
                b.push_back(n);
            }

        }
        cout<<b<<endl;
    }
}
