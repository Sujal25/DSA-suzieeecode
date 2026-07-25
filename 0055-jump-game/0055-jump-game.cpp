class Solution {
public:
bool jp(int i,vector<int>&j){
    if(i>=j.size()-1) return true;
    for(int a=1;a<=j[i];a++){
        if(jp(i+a,j)) return true;
    }
 return false;
}
    bool canJump(vector<int>& nums) {
        int n=nums.size();
       vector<int> dp(n,0);
       dp[0]=1;
       for(int i=0;i<nums.size();i++){
        for(int j=1;j<=nums[i];j++){
            if(dp[i]==0) continue;
            if(i+j<n) dp[i+j]=1;
        }
       }
       
return dp[n-1];
    }
};