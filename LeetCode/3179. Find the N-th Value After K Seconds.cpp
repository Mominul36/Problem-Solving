class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
       unsigned long long a[n][k+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<=k;j++){
                if(i==0 || j==0)
                    a[i][j] = 1;
                else 
                    a[i][j] = (a[i][j-1] + a[i-1][j]) % 1000000007;
            }
        }
        
        return a[n-1][k] % 1000000007 ;
    }
};