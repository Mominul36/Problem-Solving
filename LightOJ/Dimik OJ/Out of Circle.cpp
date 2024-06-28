#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int ox,oy,r,x,y;
        cin>>ox>>oy>>r>>x>>y;
        if((x< (ox+r) && x>(ox-r)) && (y< (oy+r) && y> (oy-r)))
            cout<< "The point is inside the circle"<<endl;
        else
            cout<< "The point is not inside the circle"<<endl;
    }
}