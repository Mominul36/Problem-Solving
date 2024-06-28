#include <bits/stdc++.h>
using namespace std;
int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    int s1= accumulate(h1.begin(),h1.end(),0);
     int s2= accumulate(h2.begin(),h2.end(),0);
     int s3= accumulate(h3.begin(),h3.end(),0);
     while(!(s1==s2 && s1==s3))
     {
         if(s1>s2 || s1>s3)
         {
             s1=s1-h1.front();
             h1.erase(h1.begin());
         }
         if(s2>s1 || s2>s3)
         {
             s2=s2-h2.front();
             h2.erase(h2.begin());
         }
         if(s3>s1 || s3>s2)
         {
             s3=s3-h3.front();
             h3.erase(h3.begin());
         }
     }
     return s1;
}

int main()
{
    int n1,n2,n3,d;
    vector<int> a,b,c;
    cin>>n1>>n2>>n3;
    for(int i=0;i<n1;i++)
    {
        cin>>d;
        a.push_back(d);
    }
    for(int i=0;i<n2;i++)
    {
        cin>>d;
        b.push_back(d);
    }
    for(int i=0;i<n3;i++)
    {
        cin>>d;
        c.push_back(d);
    }
    int result= equalStacks(a,b,c);
    cout<<result<<endl;

    return 0;
}

