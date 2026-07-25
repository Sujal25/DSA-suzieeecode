class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i])) {
            int x=nums[i];
            nums.erase(remove(nums.begin(),nums.end(),nums[i]),nums.end());
            nums.insert(nums.begin(),x);}
            mp[nums[i]]++;
        }
        sort(nums.begin(),nums.begin()+mp.size());
        return mp.size();
    }

};