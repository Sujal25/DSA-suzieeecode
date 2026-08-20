class Solution {
public:
int solve(vector<int>&nums,vector<int>&dp,int ind){
    if(ind<0) return 1;
    if(dp[ind]!=-1) return dp[ind];
    int a=0,b=0,c=0;
    if(ind>=2){
        if(nums[ind]-1==nums[ind-1]&&nums[ind-1]-1==nums[ind-2]){
            a=solve(nums,dp,ind-3);
        }
        if(nums[ind]==nums[ind-1]&&nums[ind-1]==nums[ind-2]){
            b=solve(nums,dp,ind-3);

        }
    }
    
    if(ind>=1&&nums[ind]==nums[ind-1]) c=solve(nums,dp,ind-2);
    return dp[ind]=max({a,b,c});

}
    bool validPartition(vector<int>& nums) {
        int n=nums.size();
      vector<int> dp(n,-1);  
      return solve(nums,dp,n-1);
    }
};
//sub have 2 or 3 equal or inc seq of 3 