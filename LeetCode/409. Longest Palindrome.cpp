class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        bool bl=true;
        int cnt=0;
        for(auto it= m.begin(); it!=m.end();it++){
              if(it->second %2!=0){
                bl=false;
                cnt+= it->second -1;
              }
              else 
                cnt+= it->second;
        }
        if(!bl)
        cnt++;
        return cnt;
    }
};