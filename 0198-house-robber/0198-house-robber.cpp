class Solution {
public:
int ans=-1;
int chk(vector<int>&nums,vector<int>&dp,int ind){
    if(ind<0) {
        
        return 0; }
        if(dp[ind]!=-1) return dp[ind];
        int robb=chk(nums,dp,ind-1);
        int nrobb=nums[ind]+chk(nums,dp,ind-2);
        return dp[ind]=max(robb,nrobb);

}
    int rob(vector<int>& nums) {

        int n=nums.size();
        vector<int> dp1(n,-1);
       vector<int> dp2(n,-1);
       return max(chk(nums,dp1,n-1),chk(nums,dp2,n-2));
    }
};
/*void chk(vector<int>&nums,int ind,int b){
    if(ind<0) {
        ans=max(ans,b);
        return;}
        chk(nums,ind-1,b);
        chk(nums,ind-2,b+nums[ind]);

}
    int rob(vector<int>& nums) {
        int n=nums.size();
       chk(nums,n-1,0);
       chk(nums,n-2,0);
       return ans;
    }
};*/