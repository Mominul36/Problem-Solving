#include<bits/stdc++.h>
using namespace std;
bool valid_triangle(long long a, long long b, long long c)
{
    return a+b>c && b+c>a && c+a>b;
}
vector<long long> max_triangle(long long a[], int n)
{
   vector<long long> v(3);
   long long max=0;
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
           if(valid_triangle(a[i],a[j],a[k]) && a[i]+a[j]+a[k]>max)
           {
              v[0]=a[i];
              v[1]=a[j];
              v[2]=a[k];
              max=a[i]+a[j]+a[k];
           }
        }
    }
   }
   if(v[0]==0 && v[1]==0 && v[2]==0)
   {
    vector<long long> vv(1,-1);
    return vv;
   }
   return v;
}
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<long long> v= max_triangle(a,n);
    sort(v.begin(),v.end());
    for(auto s:v)
    cout<<s<< " ";
    cout<<endl; 
}
