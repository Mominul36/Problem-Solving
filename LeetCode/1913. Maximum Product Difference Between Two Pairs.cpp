class Solution {
public:
    int maxProductDifference(vector<int>& v) {
        // map<int,int> mp;
        // for(int i=0;i<v.size();i++){
        //     mp[v[i]]=i;
        // }
        sort(v.begin(),v.end());
        return (v[v.size()-1] *v[v.size()-2]) - (v[1]*v[0]);
        
    }
};