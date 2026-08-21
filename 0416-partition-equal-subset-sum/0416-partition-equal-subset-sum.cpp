class Solution {
public:
int sum=0;
bool ans=false;
//recursive approach 
void chk(vector<int>&v,int s,int ind){
    if(ind<0){
        if(s*2==sum) ans=true;
        return ;
    }
    if(s*2==sum) {ans=true;
    return;}
    chk(v,s+v[ind],ind-1);
    chk(v,s,ind-1);
}

int chkk(vector<int>&v,vector<vector<int>>&dp,int s,int ind){
    if(ind<0||s>sum/2){
        return 0;
    }
    if(dp[s][ind]!=-1) return dp[s][ind];
    
    
    if(s*2==sum) 
    return 1;
    int a=chkk(v,dp,s+v[ind],ind-1);
    int b=chkk(v,dp,s,ind-1);
    return dp[s][ind]=a||b;
}
    bool canPartition(vector<int>& nums) {
       for(int x:nums) sum+=x;
       int n=nums.size();
       if(sum%2!=0) return false;
      vector<vector<int>> dp(sum/2+1,vector<int>(n,-1));
        return chkk(nums,dp,0,n-1);
    }
};