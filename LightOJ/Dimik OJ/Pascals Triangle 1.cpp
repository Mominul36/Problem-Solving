#include<bits/stdc++.h>
using namespace std;
void pascel(int n)
{
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            if(j==0 || j==i)
            {
                a[i][j]=1;
                continue;
            }
             a[i][j]= a[i-1][j] + a[i-1][j-1];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<< a[i][j]<< " ";
        }cout<<endl;
    }
cout<< endl;

}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
      int n;
      cin>>n;
      pascel(n+1);



    }
}
