class Solution {
 public:
  string baseNeg2(int n) {
    if(n==0)
    return "0";
    string ans;
    while (n != 0) {
        ans.push_back((n&1)+48);
      n = -(n >> 1);
    }
    reverse(ans.begin(),ans.end());
    return ans;
  }
};