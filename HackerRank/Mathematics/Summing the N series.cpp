#include<bits/stdc++.h>
using namespace std;
long long limit  =1e9+7;
int main(){
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long ans = ((n%limit)*(n%limit))%limit;
    cout<< ans<<endl;
}
}
