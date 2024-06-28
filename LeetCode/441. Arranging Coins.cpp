class Solution {
public:
    int arrangeCoins(int n) {
        int c=1,i=0;
        while(n>=c)
        {
            n=n-c;
            c++;
            i++;
        }
        return i;
    }
};
