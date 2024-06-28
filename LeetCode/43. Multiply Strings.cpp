class Solution {
public:
     string multiply(string a, string b) {
        int m=a.size(),n=b.size();
        string s((m*n)+1,'0');
        int x=(m*n),i,j;
        for(i=m-1;i>=0;i--)
        {      
            int n1=a[i]-48;
            int car=0;
            int y=x;
            for(j=n-1;j>=0;j--)
            {
                int n2=b[j]-48;
                int val = s[y] -48 + (n1*n2) + car;
                s[y] = (val%10) +48; 
                car=val/10;
                
              y--;
            }
            if(car)
            {
              int val= s[y]-48 + car;
                s[y]=val+48;
            }
            x--;
        }
        while(s.size() && s.front()=='0')
        s.erase(s.begin());
        if(!s.size())
        return "0";
       return s;
        
    }
};