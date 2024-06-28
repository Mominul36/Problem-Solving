#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,sum;
    string a;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        sum=(a.front()-48)+(a.back()-48);
        printf("Sum = %d\n",sum);
    }
}