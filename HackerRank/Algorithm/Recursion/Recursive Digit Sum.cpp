#include<bits/stdc++.h>
using namespace std;
long long string_sum(string s)
{
  long long sum=0;
  for(long long i=0;i<s.size();i++)
  {
    sum+= s[i]-48;
  }
  return sum;
}
long long fun(long long n)
{
     if(n>=1 && n<=9)
   return n;
   long long m=0;
   while(n)
   {
    m+=n%10;
    n/=10;
   }
   return fun(m);
}

int main()
{
    string s;
    long long n,k;
    cin>>s>>n;
    k=string_sum(s);
    k*=n;
    cout<<fun(k)<<endl;
}






                    


