#include<bits/stdc++.h>
using namespace std;

int main()
{
  int x1,y1,x2,y2,t,i,m,x,y;
  cin>>t;
  for(i=1;i<=t;i++)
  {
      cin>>x1>>y1>>x2>>y2;
      cin>>m;
       printf("Case %d:\n",i);
      for(int j=1;j<=m;j++)
      {
          cin>>x>>y;
          if((x>=min(x1,x2) && x<=max(x1,x2))&& (y>=min(y1,y2) && y<=max(y1,y2)))
          cout<< "Yes"<<endl;
          else
            cout << "No"<<endl;
      }
  }
  return 0;
}
