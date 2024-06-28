class Solution {
public:
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
  vvi subsets(vi &a){
   int n = a.size();
   vvi subset;
   int number_of_subset = (1<<n);

   for(int i=0;i<number_of_subset;i++){
   	vi temp;
   	for(int j=0;j<n;j++){
   		if(i &(1<<j)){
   			temp.push_back(a[j]);
   		}
   	}
   	subset.push_back(temp);
   }


sort(subset.begin(), subset.end());
 auto it = unique(subset.begin(), subset.end());
 subset.erase(it, subset.end()); 

     return subset;
}




};