class Solution {
public:
    double myPow(double a, int b) {
         bool neg = false;
    if(b<0){
        b = abs(b);
        neg=true;
    }
    double ans = 1;
    while(b){
        if(b&1){
            ans = ans * a;
        }
        a = a*a;
        b= b>>1;
    }
    if(neg){
        return 1/ans;
    }
    else
      return ans;
    }
};