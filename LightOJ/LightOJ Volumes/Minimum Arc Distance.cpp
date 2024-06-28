#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double o1,o2,a1,a2,b1,b2,dob,dab,theta,r,s;
        cin>>o1>>o2>>a1>>a2>>b1>>b2;
        dob= sqrt(pow((o1-b1),2) + pow((o2-b2),2));
        dab= sqrt(pow((a1-b1),2) + pow((a2-b2),2));
        r=dob;
        theta= acos((r*r + r*r - dab*dab)/(2*r*r));
        s=r*theta;
        printf("Case %d: %lf\n",i,s);
    }
}
