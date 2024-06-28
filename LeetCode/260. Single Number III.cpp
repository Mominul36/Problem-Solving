class Solution {
public:
bool isBitSet(int num, int i){
	return num & (1 << i);
}

    vector<int> singleNumber(vector<int>& a) {
int xo = 0;
	for(int i=0;i<a.size();i++){
		xo = xo^a[i];
	}
	int lastset=0;
	while(!isBitSet(xo,lastset)){
		lastset++;
	}

	vector<int> ans;
	int xo2=0;
	for(int i = 0;i<a.size();i++){
		if(isBitSet(a[i],lastset))
			xo2 = xo2 ^ a[i];
	}
    ans.push_back(xo2);
    ans.push_back(xo2 ^ xo);
  return ans;




    }
};