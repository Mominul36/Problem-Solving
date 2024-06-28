#include<bits/stdc++.h>
using namespace std;
#define pi 3.1416
int main()
{
  string s;
  cin>>s;
  int l=s.size();
  char ch=s[l-2];
  if(ch=='A')
  {
      s.pop_back();
      s.pop_back();
      if(stoi(s)==12)
      {
         s[0]='0';
          s[1]='0'; 
      }
  }
  else
  {
       s.pop_back();
      s.pop_back();
      int d=stoi(s);
      if(d<12)
      d=d+12;
      if(d<10)
      {
          s[0]='0';
          s[1]=d+48;
      }
      else
      {
           s[1]=(d%10)+48;
           d/=10;
          s[0]=d+48;
      }
  }
  cout<<s<<endl;

}
