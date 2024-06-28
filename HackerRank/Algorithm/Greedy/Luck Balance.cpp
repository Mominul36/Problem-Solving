#include<bits/stdc++.h>
using namespace std;
class luck
{
public:
long long l,t;
};
long max_luck(luck a[], int n, int k)
{
    long long sum = 0;
    vector<long long> v;
    for(int i=0;i<n;i++)
    {
        if(a[i].t==0)
        sum+=a[i].l;
        else
        v.push_back(a[i].l);
    }
    if(v.size()==0)
    return sum;
    int len=v.size();
    long long sum2,sum3;
    sort(v.begin(),v.end());
    if(k>=len)
    {
         sum2=0;
         sum3 = accumulate(v.begin(),v.end(),0);
    }
    else 
    {
        sum2 = accumulate(v.begin(),v.begin()+len-k,0);
       reverse(v.begin(),v.end());
        sum3 = accumulate(v.begin(),v.begin()+k,0);
    } 
    sum+=sum3;
    sum-=sum2;
    return sum;

}
int main()
{
   int n,k;
   cin>>n>>k;
   luck a[n];
   for(int i=0;i<n;i++)
    cin>>a[i].l>>a[i].t;
   
   cout<< max_luck(a,n,k);
}
