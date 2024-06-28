class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
            a.insert(a.begin(),-1);
    vector<int> b;
    for(int i=1;i<a.size();i++)
    {
      if(a[abs(a[i])]<0)
      {
             a[abs(a[i])] = 0 - a[abs(a[i])];
          b.push_back(abs(a[i]));
      }

      else
        a[abs(a[i])]= 0 - a[abs(a[i])];
    }
    return b;
    }
};