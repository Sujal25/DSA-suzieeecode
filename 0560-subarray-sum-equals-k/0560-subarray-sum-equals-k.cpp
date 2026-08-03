class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int> mp;
    int pre=0;
    mp[0]=1;
    int sub=0;
    for(int i=0;i<nums.size();i++){
        pre+=nums[i];
         if(mp.count(pre-k)>0) sub+=mp[pre-k];
        mp[pre]++;
    }
    
   
    return sub;
    }
};