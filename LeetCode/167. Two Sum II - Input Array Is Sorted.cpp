class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {

        vector<int> b;
        map<int,int> mp;
        for(int i=0;i<a.size();i++)
        mp[a[i]]=i;

        for(int i=0;i<a.size();i++)
        {
            if(mp[target-a[i]]!=0)
            {
                b.push_back(i+1);
                b.push_back(mp[target-a[i]]+1);
                break;
            }
        }
        return b;
        
    }
};