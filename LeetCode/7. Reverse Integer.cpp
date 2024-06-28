class Solution {
public:
    int reverse(int x) {
         int a=0;
    while(x){
        if(a*10 + (x%10) < INT_MIN || a*10 + (x%10) > INT_MAX)
        return 0;
        a = a*10 + (x%10);
        x/=10;
    }
    return a;
        
    }
};