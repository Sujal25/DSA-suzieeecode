class Solution {
public:
int ans(vector<vector<int>>&dp,vector<int>&p,int j,int buy){
    if(j==p.size()) return 0;
    if(dp[j][buy]!=-1) return dp[j][buy];
    int profit=0;
    if(buy){
        profit=max(-p[j]+ans(dp,p,j+1,0),ans(dp,p,j+1,1));

    }
    else
    profit=max(p[j]+ans(dp,p,j+1,1),ans(dp,p,j+1,0));
    return dp[j][buy]=profit;
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return ans(dp,prices,0,1);

    }
};
//for this we have to make dp and solve it 