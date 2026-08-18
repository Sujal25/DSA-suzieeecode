class Solution {
public:
int path(vector<vector<int>>& dp,int i,int j){
    if(i==0&&j==0) return 1;
    if(i<0||j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];

    return dp[i][j]=path(dp,i-1,j)+path(dp,i,j-1);
}
    int uniquePaths(int m, int n) {
     vector<vector<int>> dp(m,vector<int>(n,-1));
     return path(dp,m-1,n-1);

    }
};