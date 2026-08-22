class Solution {
public:
int len(vector<int>&nums,int ind,vector<int>&dp){
    if(ind<0) return 0;
   
    if(dp[ind]!=-1) return dp[ind];
    int maxi=1;
   for(int i=0;i<ind;i++){
    if(nums[ind]>nums[i])
    maxi=max(maxi,1+len(nums,i,dp));
   }
    return dp[ind]=maxi;
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        int ans=0;
        for(int i=0;i<n;i++){
ans=max(ans,len(nums,i,dp));
        }

return ans;
    }
};
/*
not correct approach 
class Solution {
public:
int len(vector<int>&nums,int ind,vector<int>&dp){
    if(ind<0) return 0;
    if(ind==0) return 1;
    if(dp[ind]!=-1) return dp[ind];
    int maxi=0;
    if(ind>0&&nums[ind]>nums[ind-1]){
        maxi=1+len(nums,ind-1,dp);
    }
    return dp[ind]=max(maxi,len(nums,ind-1,dp));
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
return len(nums,n-1,dp);
    }
};*/