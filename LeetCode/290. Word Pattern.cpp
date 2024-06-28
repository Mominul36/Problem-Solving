class Solution {
public:
bool wordPattern(string pattern, string s) {
        vector<string> v;
        map<char,string> a;
        map<string,char> b;
        string word;
        stringstream ss(s);
        while(ss>>word)
        v.push_back(word);
        if(pattern.size()!=v.size())
        return false;

        for(auto w:v)
        cout<<w << " ";
        cout<<endl;

        for(int i=0;i<pattern.size();i++)
        {
            a[pattern[i]]=v[i];
        }

         for(int i=0;i<pattern.size();i++)
        {
            if(a[pattern[i]]!=v[i])
            return false;
        }


         for(int i=0;i<pattern.size();i++)
        {
            b[v[i]]=pattern[i];
        }

         for(int i=0;i<pattern.size();i++)
        {
            if(b[v[i]]!=pattern[i])
            return false;
        }


        return true;
        
    }
};