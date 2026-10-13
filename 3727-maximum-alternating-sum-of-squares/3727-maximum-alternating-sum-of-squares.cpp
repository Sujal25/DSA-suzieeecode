class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](int x,int y){
            return abs(x)<abs(y);
        });
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()/2) ans-=(nums[i]*nums[i]);
            else ans+=(nums[i]*nums[i]);
        }
        return ans;
    }
};
