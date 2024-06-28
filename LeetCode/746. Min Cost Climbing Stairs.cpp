class Solution {
public:
int minCostClimbingStairs(vector<int>& cost) {
	int n= cost.size();
	vector<int> mincost(cost.size(),-1);

	mincost[0] = cost[0];
	mincost[1] = cost[1];

	for(int i=2;i<n;i++){
		mincost[i] = min(cost[i]+mincost[i-1],  cost[i]+mincost[i-2]);
	}
	return min(mincost[n-1], mincost[n-2]);

}
};