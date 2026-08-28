class Solution {
public:
    int minDifference(vector<int>& nums) {
       if(nums.size()<=4) return 0;
int n=nums.size()-1;
sort(nums.begin(),nums.end());
int ans=nums[n]-nums[3];
ans=min({ans,nums[n-1]-nums[2],nums[n-2]-nums[1],nums[n-3]-nums[0]});
return ans;
    }
};