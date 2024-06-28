#include <bits/stdc++.h>
using namespace std;
int commonChild(string s1, string s2) {
    s1.insert(s1.begin(),'0');
    s2.insert(s2.begin(),'0');
    
    int l1=s1.size(), l2=s2.size();
     //int a[l1+1][l2+1];
     vector<vector<int>> a(l1, vector<int> (l2));
     for(int i=0;i<l1;i++)
     {
         for(int j=0;j<l2;j++)
         {
            if(i==0 || j==0)
             a[i][j]=0;
            else
            {
                if(s1[i]==s2[j])
                {
                    a[i][j] = a[i-1][j-1]+1;
                }
                else 
                 a[i][j]= max(a[i-1][j],a[i][j-1]);
            } 
         }
     }
   
     return a[l1-1][l2-1];

}

int main()
{
    string a,b;
    cin>>a>>b;
    cout<<commonChild(a,b)<<endl;
}

