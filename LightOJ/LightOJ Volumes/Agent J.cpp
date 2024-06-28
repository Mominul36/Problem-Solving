#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double r1,r2,r3,a,b,c,s,triarea,arear1,arear2,arear3,thetar1,thetar2,thetar3,area;
            cin>>r1>>r2>>r3;
        a=r1+r2;
        b=r1+r3;
        c=r2+r3;

        s=(a+b+c)/2.0;
        triarea=sqrt(s*(s-a)*(s-b)*(s-c));
        thetar1= acos((a*a + b*b - c*c)/(2*a*b));
         thetar2= acos((a*a - b*b + c*c)/(2*a*c));
         thetar3= acos((-a*a + b*b + c*c)/(2*c*b));
        arear1= 0.5 * r1*r1* thetar1;
        arear2= 0.5 * r2*r2* thetar2;
        arear3= 0.5 * r3*r3* thetar3;
        area=triarea-(arear1 + arear2 + arear3);
        printf("Case %d: %.10lf\n",i,area);

    }
}
