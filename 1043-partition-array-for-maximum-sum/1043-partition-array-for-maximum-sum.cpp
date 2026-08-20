class Solution {
public:
int kk;
int sol(vector<int>&a,vector<int>&dp,int ind){
    if(ind<0) return 0;
    if(dp[ind]!=-1) return dp[ind];

    int ans=0;
    int mx=0;
    for(int i=1;i<=kk&&ind-i+1>=0;i++){
        mx=max(a[ind-i+1],mx);
       ans=max(ans,mx*i+sol(a,dp,ind-i));
    }
    return dp[ind]=ans;
}
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        kk=k;
        int n=arr.size();
        vector<int> dp(n,-1);
        return sol(arr,dp,n-1);
    }
};
//atmost k hrr k p 1 to k cal the fun find maxi int dp 