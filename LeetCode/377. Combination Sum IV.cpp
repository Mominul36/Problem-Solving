class Solution {
public:
  int solve(vector<int>& a, int tar){
  	 vector<unsigned int> dp(tar+1,0);
       dp[0] = 1;

       for(int i=1;i<=tar;i++){
          for(int j=0;j<a.size();j++){
          	if(i-a[j]>=0)
          	  dp[i]+= dp[i-a[j]];
          }
       }   
       return (int)dp[tar];

  }
 int combinationSum4(vector<int>& a, int tar) {
      return solve(a,tar);
  }
};