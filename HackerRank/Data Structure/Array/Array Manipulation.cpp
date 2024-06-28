#include <bits/stdc++.h>
using namespace std;
int arr[10000000+1];
int main()
{
    int n,q;
    cin>>n>>q;
    int a,b,k;
    for(int i=1;i<=q;i++)
    {
        cin>>a>>b>>k;
            arr[a-1]=arr[a-1]+k;
            arr[b]=arr[b]-k;
        
    } 
    long max=0,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>max)
        max=sum;
    }
    cout<<max<<endl;
    
}
