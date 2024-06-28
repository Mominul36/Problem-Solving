class Solution {
public:
    string addStrings(string a, string b) {
        int val,car=0,i,j;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    if(a.size()<b.size())
        swap(a,b);
    int m=a.size(),n=b.size();
    for(i=0;i<n;i++)
    {
        int val=(a[i]-48)+(b[i]-48)+car;
        a[i]=(val%10)+48;
        car=val/10;
    }
    while(i<m)
    {
        int val=(a[i]-48)+car;
        a[i]=(val%10)+48;
        car=val/10;
        i++;
    }
    while(car)
    {
       a.push_back((car%10)+48);
       car/=10;
    }
    while(a.size() && a.back()=='0')
    {
        a.pop_back();
    }
  if(a.size()==0)
  a="0";
    reverse(a.begin(),a.end());
    return a;

        
    }
};
