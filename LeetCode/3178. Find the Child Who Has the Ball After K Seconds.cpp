class Solution {
public:
    bool isEven(int n){
	return !(n&1);
}
    int numberOfChild(int n, int k) {
        
        n = n-1;
        if(isEven(k/n)){
            return k%n;
        }
        else{
            return n - (k%n);
        }
        
    }
};