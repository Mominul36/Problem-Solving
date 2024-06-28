#include <bits/stdc++.h>
using namespace std;
string jum(int x1,int v1,int x2,int v2)
{
     if((x1>x2 && v1>v2) ||(x1<x2 && v1<v2))
        {
            return "NO";
        }
   int step= 100000000 / max(v1,v2);
   for(int t=1;t<=step;t++)
   {
       double x = (double) ((t*(v1+v2))+(x1+x2))/2;
       double xx1=(double) (v1*t) + x1;
       double xx2 = (double) (v2*t) + x2;
       if(x==xx1 && x==xx2)
       return "YES";
   }
   return "NO";

}
int main()
{
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    string a=jum(x1,v1,x2,v2);
    cout<<a;
}

