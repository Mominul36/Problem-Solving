#include<bits/stdc++.h>
using namespace std;
string decent_number(int n)
{
  if(n%3==0)
  {
     string s(n,'5');
     return s;
  }
  int m=n,c=0;
  while(n%3!=0 && n>0)
  {
    n-=5;
  }
  if(n<0)
  {
    return "-1";
  }
  if(n==0)
  {
    string s(m,'3');
    return s;
  }
  if(n>0)
  {
    string s(n,'5');
    for(int i=1;i<=m-n;i++)
    s.push_back('3');
    return s;
  }
  return "-1";
  

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<decent_number(n)<<endl;
    }
    
}
