class Solution {
public:
int find(int i,int j,vector<vector<int>>&dp,vector<vector<int>>& grid){
    if(i<0||j<0) return INT_MAX;
    if(i==0&&j==0) return grid[0][0];
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]=grid[i][j]+min(find(i,j-1,dp,grid),find(i-1,j,dp,grid));
}
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
return find(m-1,n-1,dp,grid);

    }
};
//two option are d and r make it l and up i-1,j--i,j-1;