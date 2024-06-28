class Solution {
public:
    int singleNumber(vector<int>& a) {
        int xo = 0;
	for(int i=0;i<a.size();i++){
		xo = xo^a[i];
	}
	return xo;
    }
};