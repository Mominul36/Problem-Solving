//https://codeforces.com/problemset/problem/268/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }

    int cnt=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==b[j])
                cnt++;
            if(b[i]==a[j])
                cnt++;
        }
    }
    cout<< cnt<<endl;

  return 0;
}
