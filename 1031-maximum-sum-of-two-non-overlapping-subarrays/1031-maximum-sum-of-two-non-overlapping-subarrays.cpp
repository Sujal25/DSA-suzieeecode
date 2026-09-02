class Solution {
public:

int sum(vector<int>&pre,vector<vector<int>>& dp,int ind,int f,int s,int k){
    if(k==0) return 0;
      if (ind < 0)
            return INT_MIN;
    if(dp[ind][k]!=-1) return dp[ind][k];
    int t=INT_MIN,nt=INT_MIN;
    if(k==2){
        for(int i=ind;i>=f-1;i--){
            int curr = pre[i] - (i - f >= 0 ? pre[i - f] : 0);

            t=max(t,curr+sum(pre,dp,i-f,f,s,k-1));
        }
    }
    if(k==1){
        for(int i=ind;i>=s-1;i--){
             int curr = pre[i] - (i - s >= 0 ? pre[i - s] : 0);

            nt=max(nt,curr+sum(pre,dp,i-s,f,s,k-1));
        }
    }
    return dp[ind][k]=max(t,nt);

}
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        //use of presum array isneeded 
        vector<int> pre;
        int p=0;
        int n=nums.size();
        for(int x:nums){
            p+=x;
            pre.push_back(p);
        }
        //pre is preffix sum 
        vector<vector<int>> dp(n,vector<int>(3,-1));
        int ans=sum(pre,dp,n-1,firstLen,secondLen,2);
         vector<vector<int>> dp2(n,vector<int>(3,-1));
        ans=max(ans,sum(pre,dp2,n-1,secondLen,firstLen,2));
        
return ans;
    }
};
//given nums and flen and slen i think use of prefix sum 
//0,6,11,13,15,20,21,30,34
//flen 
//first flen thenn find for slen nad vice verssa 