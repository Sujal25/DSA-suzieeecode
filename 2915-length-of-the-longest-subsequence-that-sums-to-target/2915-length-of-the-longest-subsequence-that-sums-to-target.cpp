class Solution {
public:
int len=-1;
int t;
void seq(vector<int>& nums, int s,int ind,int l){
    if(s==t){
        len=max(len,l);
        return;
    }
    if(ind<0||s>t){
       
        return;
    }
    
    if(s+nums[ind]<=t){
        seq(nums,s+nums[ind],ind-1,l+1);

    }
    
    seq(nums,s,ind-1,l);
}
int seqq(vector<int>& nums,vector<vector<int>>&dp,int ind,int s){
    if(s==t){
        return 0;
    }
    if(ind<0||s>t){
        return -100000;
    }
    if(dp[ind][s]!=-1) return dp[ind][s];
    int take=-100000;
    if(s+nums[ind]<=t){
        take=1+seqq(nums,dp,ind-1,s+nums[ind]);

    }
    int nt=seqq(nums,dp,ind-1,s);
return dp[ind][s]=max(nt,take);
    
   
}
  
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        t=target;
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
int ans=seqq(nums,dp,n-1,0);
if(ans<=0) return -1;
       
        
        return  ans;
    }
};