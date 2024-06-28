class Solution {
public:
    string reverseWords(string s) {
        vector<string> a;
        string word;
        istringstream var(s);
        while(var>>word)
        {
            a.push_back(word);
        }
        reverse(a.begin(),a.end());
        string ss="";
        for(int i=0;i<a.size();i++)
        {
            if(i==a.size()-1)
            {
                ss=ss+ a[i];
            }
            else 
            {
                ss=ss+a[i];
                ss=ss+ " ";
            }
        }
        return ss;

    }
};
