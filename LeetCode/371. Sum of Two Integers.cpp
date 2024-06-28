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
int setBit(int n, int i){
	return n | (1<<i);
}
 int getSum(int a, int b) {
      int ans = 0;
      int car = 0;
      for(int i=0;i<32;i++){
      	int aa = isBitSet(a,i);
      	int bb = isBitSet(b,i);
          if(aa^bb == 1 ){
          	if(car==0){
          		ans = setBit(ans,i);
          	}
          }
          else if(aa==0 && bb==0){
          	if(car==1){
          		car = 0;
          		ans = setBit(ans,i);
          	}
          }
          else if(aa==1 && bb==1){
          	if(car==0){
          		car=1;
          	}
          	else{
          		ans = setBit(ans,i);
          	}
          }



      }
      return ans;

    }
};