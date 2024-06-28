class Solution {
public:
    string mergeAlternately(string a, string b) {
        string s;
        int i;
        for(i=0;i<min(a.size(),b.size());i++){
            s.push_back(a[i]);
             s.push_back(b[i]);
        }
        while(i<a.size()){
            s.push_back(a[i]);
            i++;
        }

             while(i<b.size()){
            s.push_back(b[i]);
            i++;
        }
        return s;
    }
};