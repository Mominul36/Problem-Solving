#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
      char a;
        cin>>a;
        if(isupper(a)!=0)
            cout<< "Uppercase Character"<<endl;
         else if(islower(a)!=0)
            cout<< "Lowercase Character"<<endl;
        else  if(isdigit(a)!=0)
            cout<< "Numerical Digit"<<endl;
        else 
            cout<< "Special Characters"<<endl;
    }
}


