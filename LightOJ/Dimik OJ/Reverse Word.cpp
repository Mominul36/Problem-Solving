#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    string a;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        if(i==0)
            cin.ignore();
       cin>>a;
        reverse(a.begin(),a.end());
        cout<<a<<endl;
    }
}
