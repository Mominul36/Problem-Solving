#include<bits/stdc++.h>
using namespace std;
void run_rate(double tr, double cr, double b)
{
    double cb = 300 - b;
    double crr = (cr/cb)*6;
    if(cr>tr || b==0)
    {
        printf("%.2lf 0.00\n",crr);
        return;
    }
    double rrr = ((tr+1-cr)/b)*6;
    printf("%.2lf %.2lf\n",crr,rrr);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double tr,cr,b;
        cin>>tr>>cr>>b;
        run_rate(tr,cr,b);
    }
}