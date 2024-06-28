class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        unsigned int sum=0,a=x;
        while(x)
        {
            sum=(sum*10)+x%10;
            x/=10;
        }
        if(sum==a)
        return true;
        else
        return false;
    }
};
