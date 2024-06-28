#include<bits/stdc++.h>
using namespace std;
class pass
{
  string s;
  int n;
  public:
  void input()
  {
    cin>>n;
    cin.ignore();
    cin>>s;
  }
  int result()
  {
    int l=s.size(),d=0,lc=0,uc=0,sc=0;   
    for(int i=0;i<l;i++)
    {
      if(s[i]>='0' && s[i]<='9')
      d++;
      if(s[i]>='a' && s[i]<='z')
      lc++;
      if(s[i]>='A' && s[i]<='Z')
      uc++;
      if(s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='$' || s[i]=='%' ||
      s[i]=='^' || s[i]=='&' || s[i]=='*' || s[i]=='(' || s[i]==')' || 
       s[i]=='-' || s[i]=='+')
       sc++;
    }
    int sum=0;
    if(d==0)
    sum++;
    if(lc==0)
    sum++;
    if(uc==0)
    sum++;
    if(sc==0)
    sum++;

    if(l<6)
    l=6-l;
    else 
    l=0;
    if(l==0)
    return sum;
    else 
    {
      if(sum<=l)
      return l;
      else{
        return sum;
      }

    }
  }
};


int main()
{
    pass p;
    p.input();
    cout<<p.result();
}






                    


