class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int> mp;

        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(int i=mini+1;i<maxi;i++){
            if(!mp.count(i)) ans.push_back(i);
        }
        return ans;
    }
};