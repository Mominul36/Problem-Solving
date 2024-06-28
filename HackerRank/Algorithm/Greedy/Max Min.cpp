#include<bits/stdc++.h>
using namespace std;
long min_unfair(vector<long> a, int n,int k)
{
  sort(a.begin(),a.end());
  long min=a[k-1]-a[0];
  for(long i=0;i<=n-k;i++)
  {
    if(a[i+k-1]-a[i]<min)
    min=a[i+k-1]-a[i];
  }
  return min;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<long> a;
    long d;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        a.push_back(d);
    }
    cout<<min_unfair(a,n,k)<<endl;
    
}
