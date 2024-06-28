class Solution {
public:
int gcd(int a, int b) 
{ 
	   if(a>b)
	  swap(a,b);
    int res=0;
    for(int i=1;i*i<=a;i++)
	   {
        if(a%i==0)
         {
             if(b%i==0)
             {
                 res=i;
             }
             int d= a/i;
             if(b%d==0)
             return d;
         }
    }
    if(res)
    return res;
    return 1;
    } 
    int findGCD(vector<int>& nums) {
         return gcd(*min_element(nums.begin(),nums.end()),*max_element(nums.begin(),nums.end()));
    }
};