#include <bits/stdc++.h>
using namespace std;
string isBalanced(string s) {
    int i=1;
     while(s.length())
     {
        if(s[i]==')')
        {
            if(s[i-1]!='(')
             return "NO";
             s.erase(s.begin()+i-1, s.begin()+i+1);
            i--;
            continue;
        }
         else if(s[i]=='}')
        {
            if(s[i-1]!='{')
             return "NO";
             s.erase(s.begin()+i-1, s.begin()+i+1);
        i--;
         continue;
        }
        else if(s[i]==']')
        {
            if(s[i-1]!='[')
             return "NO";
             s.erase(s.begin()+i-1, s.begin()+i+1);
        i--;
         continue;
        }
        i++;

     }
     return "YES";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        cout<< isBalanced(a)<<endl;
    }

    return 0;
}

