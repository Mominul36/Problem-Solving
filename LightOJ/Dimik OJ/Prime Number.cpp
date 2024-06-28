#include<bits/stdc++.h>
using namespace std;
bool primecheck(int n)
{
    if(n==1)
        return false;
     if(n==2 || n==3)
         return true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int primecount(int a, int b)
{
    int c=0;
    for(int i=a;i<=b;i++)
    {
        if(i==2)
            c++;
        else if(i%2!=0)
        {
            if(primecheck(i)==true)
                c++;
                
        }
    }
    return c;
}
int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<primecount(a,b)<<endl;
    }
}
