#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int cas=1;cas<=t;cas++)
    {
        long long n,q,d,i;
        cin>>n>>q;
        vector<long long> a;
        for(i=1;i<=n;i++)
        {
            cin>>d;
            a.push_back(d);
        }
        cout<< "Case "<<cas<<":"<<endl;
        for(i=1;i<=q;i++)
        {
            char c;
            long long val;
            cin>>c>>val;
            if(c=='a')
            {
                a.push_back(val);
            }
            else if(c=='c')
            {
                if(val>a.size())
                    cout<<"none"<<endl;
                else
                {
                    cout<<a[val-1]<<endl;
                    a.erase(a.begin()+(val-1));
                }

            }

        }
    }
}
