#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,j;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        string a,b;
        cin>>a>>b;

        int len1=a.length(), len2=b.length();

        for( j=0;j<len1-len2;j++)
        {
            if(a[j]==b[0])
            {
                bool bl=true;
                int c=j;
                for(int k=0;k<len2;k++)
                {
                   if(a[c++]!=b[k])
                   {
                       bl=false;
                       break;
                   }
                }
                if(bl==true)
                    break;
            }
        }
        cout<< j<<endl;
    }
}
