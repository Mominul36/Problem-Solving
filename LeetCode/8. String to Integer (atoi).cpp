class Solution {
public:
    int myAtoi(string s) {
        bool bl=true,v=true;
        long long sum=0,var=2147483648 ;
        for(int i=0;i<s.size();i++)
        {
            if(bl==true)
            {
                if(s[i]==' ')
                continue;
                else if(s[i]=='+')
                {
                    bl=false;
                    continue;
                }
                else if(s[i]=='-')
                {
                    bl=false;
                    v=false;
                    continue;
                }
                else if(s[i]>='0' && s[i]<='9')
                {
                    sum = sum*10 - 48 + s[i];
                    bl=false;
                }
                else 
                  break;

    
            }
            else 
            {
                if(s[i]>='0' && s[i]<='9')
                {   
                     sum = sum*10 - 48 + s[i];
                     if(v==true && sum>INT_MAX)
                     return INT_MAX;
                     if(v==false && sum>=var)
                     return INT_MIN;
                    bl=false;
                }
                else 
                break;
            }
        }
        if(v==false)
        sum= 0 - sum;
        int dd=sum;
        return dd;
    }
};