class Solution {
public:
int m=1e9+7;
int kk;
int t;
int sol(vector<vector<int>>&dp,int n,int s){
    if(n<0){
        if(s==t) return 1;
        return 0;
    }
    if(s>t) return 0;
    if(dp[n][s]!=-1) return dp[n][s];
    int way=0;
    for(int i=1;i<=kk;i++){
        way=(way+sol(dp,n-1,s+i))%m;
    }
    return dp[n][s]=way%m;
}
    int numRollsToTarget(int n, int k, int target) {
        //n dice k faces 1---k;;;;;;;;;;
        kk=k;
        t=target;
        //dp with target and n 
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return sol(dp,n-1,0);
    }
};