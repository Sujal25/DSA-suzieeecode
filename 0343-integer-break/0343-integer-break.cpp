class Solution {
public:
int sol(vector<int>&dp,int n){
    if(n<0) return 0;
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    int ans=0;
    for(int i=1;i<n;i++){
       ans=max(ans,i*max(n-i,sol(dp,n-i)));
    }
    return dp[n]=ans;
}
    int integerBreak(int n) {
        vector<int> dp(n+1,-1);
        return sol(dp,n);
    }
};