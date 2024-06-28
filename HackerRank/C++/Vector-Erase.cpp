#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d,r,f,l;
    vector<int> a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>d;
        a.push_back(d);
    } 
    cin>>r;
    cin>>f>>l;
    a.erase(a.begin()+r-1);
    a.erase(a.begin()+f-1, a.begin()+l-1);
    cout<<a.size()<<endl;
    for(auto s:a)
    cout<<s<< " ";
    cout<<endl;
    return 0;
}
