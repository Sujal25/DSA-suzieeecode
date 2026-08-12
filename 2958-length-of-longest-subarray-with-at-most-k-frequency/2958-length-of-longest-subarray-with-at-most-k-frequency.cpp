class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int len=0;
        unordered_map<int,int> mp;
        while(j<nums.size()){
            mp[nums[j]]++;
            while(mp[nums[j]]>k){
                if(mp[nums[i]]==0) mp.erase(nums[i]);
                mp[nums[i]]--;
                i++;
            }
            len=max(len,j-i+1);
            j++;
        }
        return len;
    }
};
//arr and k 