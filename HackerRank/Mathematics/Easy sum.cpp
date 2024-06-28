#include<bits/stdc++.h>
using namespace std;
long long limit  =1e9+7;
int main(){
int t;
cin>>t;
while(t--){
    long long n,m;
    cin>>n>>m;
    long long a = (m*(m-1))/2;
    a = a * (n/m);
    long long b = n%m;
    a+= (b*(b+1))/2;
    cout<<a<<endl;
}
}
