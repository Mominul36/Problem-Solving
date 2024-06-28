#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a[5];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        for(int j=0;j<3;j++)
            cin>>a[j];

        sort(a,a+3);
        cout<< "Case "<<i<< ": ";
         for(int j=0;j<3;j++)
            cout<<a[j]<< " ";
        cout<<endl;
    }
}
