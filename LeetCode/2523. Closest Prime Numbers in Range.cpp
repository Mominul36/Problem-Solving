class Solution {
public:
vector<int> primecount(int a, int n)
{
  vector<bool> v(n+1,true);
  v[0]=v[1]=false;
  vector<int> s;
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
  for(int i=a;i<=n;i++)
  {
    if(v[i])
    {
        s.push_back(i);
    }
  }
  return s;
}
    vector<int> closestPrimes(int a, int b) {
             vector<int> v= primecount(a,b);
             vector<int> r;
             if(v.size()<=1)
             {
                 r.push_back(-1);
                 r.push_back(-1);
                 return r;
             }

             int x=v[0], y=v[1];
             int d=y-x;
             for(int i=2;i<v.size();i++)
             {
                 if(v[i]-v[i-1]<d)
                 {
                     x=v[i-1];
                     y=v[i];
                     d=y-x;
                 }

             }
             r.push_back(x);
             r.push_back(y);
             return r;

    }
};