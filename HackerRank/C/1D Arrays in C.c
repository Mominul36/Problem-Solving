#include<stdio.h>
int main()
{
    long long int n,i,sum=0;
   
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum+=a[i];
    }
    printf("%lld\n",sum);
}
