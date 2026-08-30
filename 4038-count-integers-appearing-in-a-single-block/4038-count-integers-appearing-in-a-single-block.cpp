class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
       unordered_map<int,int> mp;
        for(int x:nums) mp[x]++;
       
        int i=0;
        int j=0;
        int ans=0;
        while(j<nums.size()){
            if(nums[i]==nums[j]) j++;
            else {
                if(j-i==mp[nums[i]]) ans++;
                i=j;
            }
        }
        if (nums.size()-i== mp[nums[i]]) ans++;
        return ans;
    }
};