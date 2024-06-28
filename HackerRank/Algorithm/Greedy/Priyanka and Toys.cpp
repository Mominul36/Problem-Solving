#include<bits/stdc++.h>
using namespace std;
int toys(long a[], long n)
{
    if(n==1)
    return 1;
   sort(a,a+n);
    int c=0;
    long min=a[0];
    for(int i=1;i<n;i++)
    {
      if(a[i]-min>4)
      {
         c++;
         min=a[i];
      }
      if(i==n-1)
      c++;
    }
    return c;
}
int main()
{
    long n;
    cin>>n;
    long a[n];
    for(long i=0;i<n;i++)
    cin>>a[i];
    cout<<toys(a,n)<<endl;
}
