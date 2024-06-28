#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int k=1;k<=t;k++){
   long long n;
   cin>>n;
   if(n==1){
       cout<< "Case "<<k<<": "<<1<<" "<<1<<endl;
       continue;
   }
   
   long long c = ceil(sqrt(n));
   long long middle = (pow(c-1,2)+1 + pow(c,2))/2;
   if(c%2==0){
       if(middle==n){
            cout<< "Case "<<k<<": "<<c<<" "<< c<<endl;
       }
      else if(middle>n){
         cout<< "Case "<<k<<": "<<c-(middle-n)<<" "<< c<<endl;
      }
      else{
         cout<< "Case "<<k<<": "<<c<<" "<< c-(n-middle)<<endl;
      }
   }
   else{
        if(middle==n){
            cout<< "Case "<<k<<": "<<c<<" "<< c<<endl;
       }
      else if(middle>n){
         cout<< "Case "<<k<<": "<<c<<" "<< c - (middle-n)<<endl;
      }
      else{
          cout<< "Case "<<k<<": "<<c - (n-middle)<<" "<< c<<endl;
      }

   }

  }
}
