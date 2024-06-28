#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    double r,areac,areas,a,d;
    double pi=2*acos(0.0);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&r);
        d=((2*r)*(2*r))-(pi*r*r);
        printf("Case %d: %.2lf\n",i,d);
    }
    return 0;
}