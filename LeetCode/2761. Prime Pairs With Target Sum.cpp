class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> v(n+1,true);

       v[0]=false;
       v[1]=false;

       for(int i=2;i*i<=n;i++)
       {
         if(v[i]==true)
         {
            if(i==2)
            {
                 for(int j=i*i;j<=n;j+=i)
            {
               v[j]=false;
            }
            }
            else 
            {
                 for(int j=i*i;j<=n;j+=2*i)
            {
               v[j]=false;
            }
            }
           
         }
       }


       vector<vector<int>> list;
       for(int i=2;i<=n/2;i++)
       {
           if(v[i] && v[n-i])
           {
               vector<int> t(2);
               t[0]=i;
               t[1]=n-i;
               list.push_back(t);
           }
       }
        return list;
    }
};