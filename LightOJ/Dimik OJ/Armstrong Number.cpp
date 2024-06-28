#include<bits/stdc++.h>
using namespace std;
int intlen(int a)
{
    int c=0;
    while(a)
    {
        c++;
        a/=10;
    }
    return c;
}
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
      int n,sum=0;
        cin>>n;
        int d=intlen(n),dd=n;
        for(int j=1;j<=d;j++)    
        {
           sum+=pow((n%10),d);
            n/=10;
        } 
        if(sum==dd)
            cout<<dd<<" is an armstrong number!"<<endl;
        else 
            cout<< dd<<" is not an armstrong number!"<<endl;
    }
}


