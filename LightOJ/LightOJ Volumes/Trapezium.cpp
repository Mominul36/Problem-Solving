#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double a,b,c,d,s,area;
        cin>>a>>b>>c>>d;

        if(a<c)
            swap(a,c);
        s=(a+b+c+d)/2;
        area=((a+c)/(a-c))* sqrt((s-a)*(s-c)*(s-c-b)*(s-c-d));
        printf("Case %d: %lf\n",i,area);

    }
}