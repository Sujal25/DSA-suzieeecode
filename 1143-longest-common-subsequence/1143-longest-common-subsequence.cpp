class Solution {
public:
int sub(int i,int j,string&t1,string&t2,vector<vector<int>>&dp){
    if(i<0||j<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
int match=0;
    if(t1[i]==t2[j]){
match=1+sub(i-1,j-1,t1,t2,dp);
    }
    int nott=max(sub(i-1,j,t1,t2,dp),sub(i,j-1,t1,t2,dp));
    return dp[i][j]=max(match,nott);
}
    int longestCommonSubsequence(string text1, string text2) {
        int i=text1.size();
        int j=text2.size();
        vector<vector<int>> dp(i,vector<int>(j,-1));
        return sub(i-1,j-1,text1,text2,dp);
    }
};
//if match i-1,j-1,,,if not then i-1,j----i,j-1