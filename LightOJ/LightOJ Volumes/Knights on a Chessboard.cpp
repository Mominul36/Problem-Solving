

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t;
    cin>>t;
	for(long k=1;k<=t;k++)
	{
        int m,n;
       cin>>m>>n;
		if(m == 1 || n==1)
        {
            cout<< "Case "<<k<<": "<<max(m,n)<<endl;
            continue;
        }
		else if(m == 2 || n==2)
		{
            int p =max(m,n);
            ///int q = max(m,n);
            if(p%4==0){
                 cout<< "Case "<<k<<": "<<p<<endl;
            }
            else if(p%4==2){
                 cout<< "Case "<<k<<": "<<p+2<<endl;
            }
            else{
                cout<< "Case "<<k<<": "<<p+1<<endl;
            }
			// ans = (m / 4) * 4;
			// if(m % 4 == 1)
			// 	ans += 2;
			// else if(m % 4 > 1)
			// 	ans += 4;
		}
		else
        cout<< "Case "<<k<<": "<<((m * n) + 1) / 2<<endl;
			//ans = ((m * n) + 1) / 2;
	}
	
	return 0;
}