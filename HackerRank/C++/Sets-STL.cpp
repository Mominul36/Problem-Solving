#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
   set<int> s;
   int q;
   cin>>q;
   for(int i=1;i<=q;i++)
   {
       int y,x;
       cin>>y>>x;
       if(y==1)
       s.insert(x);
       if(y==2)
       s.erase(x);
       if(y==3)
       {
           set<int> :: iterator it;
           it=s.find(x);
           if(it==s.end())
           cout<<"No"<<endl;
           else 
           cout<< "Yes"<<endl;
       }
   }   
    return 0;
}



