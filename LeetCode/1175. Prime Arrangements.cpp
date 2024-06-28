class Solution {
public:
int primecount(int n)
{
  vector<bool> v(n+1,true);
  for(int i=2;i*i<=n;i++)
  {
    if(v[i])
    {
      for(int j=i*i;j<=n;j=j+i)
      {
         v[j]=false;
      }
    }
  }
  int cnt=0;
  for(int i=2;i<=n;i++)
  {
    cnt+=v[i];
  }
  return cnt;
}
long long factorial(int n)
{
  long long s=1;
  for(int i=1;i<=n;i++)
  {
    s= (s*i)%1000000007;
  }
  return s;
}
    int numPrimeArrangements(int n) {
         int x=primecount(n);
         int y=n-x;

         long long a=factorial(x);
         long long b=factorial(y);
         long long r= (a*b)%1000000007;
         int d=r;
         return d;
    }
};