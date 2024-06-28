class Solution {
public:
    void nextPermutation(vector<int>& a) {
        next_permutation(a.begin(),a.end());
        for(auto s:a)
        {
            cout<<s<< " ";
        }
        cout<<endl;
    }
};
