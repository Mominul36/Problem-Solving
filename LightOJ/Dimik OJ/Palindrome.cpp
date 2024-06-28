#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
      string a,b;
        cin>>a;
        b=a;
        reverse(a.begin(),a.end());
        if(a==b)
            cout<< "Yes! It is palindrome!"<<endl;
        else 
            cout<< "Sorry! It is not palindrome!"<<endl;
        
    }
}


