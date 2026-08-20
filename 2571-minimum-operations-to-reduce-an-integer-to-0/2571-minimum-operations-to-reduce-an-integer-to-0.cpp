class Solution {
public:
int near(int n) {
    if (n < 1) return 0;
    return (31 - __builtin_clz(n)); // Uses CPU leading zero count
}
int sol(int n,vector<int>&dp){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    
    int p=near(n);
    int ans=1+sol(n-(1<<p),dp);
    int next=(1<<(p+1));
    if (next - n != n) {
    ans=min(ans,1+sol(next-n,dp));}
    return dp[n]=ans;
}
    int minOperations(int n) {
        vector<int> dp(n+1,-1);
        return sol(n,dp);
    }
};