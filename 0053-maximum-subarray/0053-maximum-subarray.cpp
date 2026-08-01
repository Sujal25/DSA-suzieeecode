class Solution {
public:
    int maxSubArray(vector<int>& nums) {
  int sum=nums[0];
  int ans=nums[0];

        for(int j=1;j<nums.size();j++){
           sum=max(sum+nums[j],nums[j]);
           ans=max(sum,ans);
        }
return ans;
    }
};