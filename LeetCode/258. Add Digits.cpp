class Solution {
public:
    int addDigits(int num) {
        if(num<10)
        return num;

        int r=0;
        while(num){
            r+= num%10;
            num/=10;
        }
        return addDigits(r);
        
    }
};