#include<bits/stdc++.h>
using namespace std;
void print(vector<int> a)
{
    for(auto s:a)
    cout<<s<< " ";
    cout<<endl;
}
long candies(int n, vector<int> a) {
    vector<int> b(a.size(),1),c(a.size(),1);

    for(int i=1;i<a.size();i++)
    {
        if(a[i]>a[i-1])
        b[i]=b[i-1]+1;      
    }
    for(int i=a.size()-2;i>=0;i--)
    {
        if(a[i]>a[i+1])
        c[i]=c[i+1]+1;
    }
    long sum=0;
    for(int i=0;i<a.size();i++)
    sum+= max(b[i],c[i]);
    //print(b);
   // print(c);
    return sum;
    
}
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<candies(n,a)<<endl;
}
