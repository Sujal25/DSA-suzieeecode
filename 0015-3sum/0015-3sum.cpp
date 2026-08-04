class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                
                if(mp.count(-nums[i]-nums[j])) st.insert({nums[i],nums[j],-(nums[i]+nums[j])});

            }
            mp[nums[i]]++;
        }
        for(auto &s:st){
            ans.push_back(s);
        }
        return ans;
    }
};