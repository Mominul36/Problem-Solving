#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int mul=1,i;
    for(i=1;i<=n;i++)
        mul*=i;
        return mul;
}
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
      long long int n;
        double sum=0.0;
        cin>>n;
        for(int j=1;j<=n;j++)
        {
            long long int d=fact(j);
            sum+=(double)j/d;
        }
        printf("%.4lf\n",sum);
    }
}
