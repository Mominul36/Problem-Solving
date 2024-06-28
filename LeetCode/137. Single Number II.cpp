class Solution {
public:
//Check i'th bit set or not
bool isBitSet(int num, int i){
	return num & (1 << i);
}

//Check Even or Odd
bool isEven(int n){
	return !(n&1);
}

//Set i'th bit from 0 to 1
void setBit(int &n, int i){
	n = n | (1<<i);
}
    int singleNumber(vector<int>& a) {
        int ans = 0;
	for(int i=0;i<32;i++){
		int cnt = 0;
		for(int j=0;j<a.size();j++){
			if(isBitSet(a[j],i)){
				cnt++;
			}
		}
		if(cnt%3 != 0){
			setBit(ans,i);
		}
	}
	return ans;
        
    }
};