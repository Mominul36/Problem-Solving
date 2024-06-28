#include<bits/stdc++.h>
using namespace std;
void print(vector<int> a)
{
    for(auto s:a)
        cout<< s<< " ";
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long n1,n2,d;
        vector<int> c;
        cin>>n1;
        for(int j=1;j<=n1;j++)
        {
            cin>>d;
            c.push_back(d);
        }
        cin>>n2;
        for(int j=1;j<=n2;j++)
        {
            cin>>d;
            c.push_back(d);
        }

        sort(c.begin(),c.end());
        print(c);
      



    }
}
