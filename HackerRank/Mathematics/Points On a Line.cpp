#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i]>>b[i];
    
    /*int c1=a[0];
    int c2=b[0];
    
    bool aa=true, bb=true;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=c1)
        aa=false;
        if(b[i]!=c2)
        bb=false;
        
    }
    if(aa==false && bb==false)
    cout<<"NO"<<endl;
    else 
    cout<< "YES"<<endl;*/
    
    long sum1=accumulate(a,a+n,0);
    long sum2=accumulate(b,b+n,0);
    
    bool aa=true, bb=true;
    if(a[0]*n!=sum1)
    {
         aa=false;
    }
    
    
   if(b[0]*n!=sum2)
    {
         bb=false;
    }
    if(aa==false && bb==false)
    cout<<"NO"<<endl;
    else 
    cout<< "YES"<<endl;
}
