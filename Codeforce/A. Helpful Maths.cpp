//https://codeforces.com/problemset/problem/339/A
#include<bits/stdc++.h>
using namespace std;
vector<int> split(string s){
    vector<int> v;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+')
            v.push_back(s[i]-48);
    }
    return v;
}
int main()
{
   string s;
   cin>>s;
   vector<int> v = split(s);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<< v[i];
        if(i!=v.size()-1)
            cout<< "+";
    }
    cout<< endl;
  return 0;
}
