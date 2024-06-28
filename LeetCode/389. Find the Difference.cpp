class Solution {
public:
    char findTheDifference(string s, string t) {
        int xo = 0;
        for(int i=0;i<s.size();i++){
            xo = xo ^ (int)s[i];
        }
         int xo2 = 0;
        for(int i=0;i<t.size();i++){
            xo2 = xo2 ^ (int)t[i];
        }
        return (char)(xo ^ xo2);
        
    }
};