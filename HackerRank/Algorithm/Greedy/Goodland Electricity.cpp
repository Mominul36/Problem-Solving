#include <bits/stdc++.h>
using namespace std;
int power_plant(vector<int> a, int n, int k) {
    int start= 0, mid= k-1, end= 2*k -2,area=2*k-1;
    int pp=0,point;
    while(start<n)
    {
        if(a[mid]==1)
        {
          pp++;
          point=mid;
          start+=area;
          end+=area;
          mid+=area;
          if(end>=n)
          end = n-1;
          
        }
        else 
        {
          start--;
          end--;
          mid--;
          if(mid==point)
          return -1;
        }
    }
    return pp;

}

int main()
{
   int n,k;
   cin>>n>>k;
   vector<int> a(n);
   for(int i=0;i<n;i++)
   cin>>a[i];
   cout<< power_plant(a,n,k)<<endl;
}

