#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> a;
    for(int i=1;i<=n;i++)
    {
        int d;
        cin>>d;
        a.push_back(d);
    } 
    sort(a.begin(),a.end());
    for(auto s:a)
    cout<< s<< " ";
    cout<<endl;
    return 0;
}
