#include<bits/stdc++.h>
using namespace std;
bool primecheck(long long n)
{
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    bool bl=true;
    int root=sqrt(n);
    for(int i=3;i<=root;i=i+2)
    {
        if(n%i==0)
            bl=false;
    }
    return bl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
       long long n;
       cin>>n;
        bool bl=primecheck(n);
        if(bl==true)
            cout<< n<< " is a prime"<<endl;
        else
            cout<< n<< " is not a prime"<<endl;

    }
}
