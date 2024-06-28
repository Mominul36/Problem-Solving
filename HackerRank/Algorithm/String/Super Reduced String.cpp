#include<bits/stdc++.h>
using namespace std;
string reduce_string(string s)
{
  while(1)
  {
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]==s[i+1])
        {
          s[i]='0';
          s[i+1]='0';
        }
    }
    string ss="";
    for(int i=0;i<s.size();i++)
    {
      if(s[i]!='0')
      ss.push_back(s[i]);
    }
    if(ss.size()==0)
    return "Empty String";
    if(s.size()==ss.size())
    {
      s=ss;
      break;
    }
    else
    s=ss;
  }
  if(s.size()==0)
  return "Empty String";
  return s;
}
int main()
{ 
  string s;
  cin>>s;
  cout<< reduce_string(s)<<endl;
}





                    


