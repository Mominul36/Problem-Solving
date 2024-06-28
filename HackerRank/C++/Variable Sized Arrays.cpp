
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    vector<vector<int>> v;
    
    for(int i=1;i<=n;i++)
    {
         int k;
         cin>>k;
         vector<int> a;
         for(int j=1;j<=k;j++)
         {
             int d;
             cin>>d;
             a.push_back(d);
         }
         v.push_back(a);
    }
    
    for(int i=1;i<=q;i++)
    {
        int a,b;
        cin>>a>>b;
        cout<< v[a][b]<<endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
