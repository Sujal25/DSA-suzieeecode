class Solution {
public:
int m=1e9+7;
    int specialTriplets(vector<int>& nums) {
        unordered_map<int,int> mp_r;
        unordered_map<int,int> mp_l;
        long long trip=0;
        for(int c:nums) mp_r[c]++;
        mp_l[nums[0]]++;
        if(mp_r[nums[0]]==1) mp_r.erase(nums[0]);
        else mp_r[nums[0]]--;
        for(int i=1;i<nums.size();i++){
           if(mp_r.find(nums[i])!=mp_r.end()) mp_r[nums[i]]--;
            if(mp_r[nums[i]]==0) mp_r.erase(nums[i]);
            if(mp_l[nums[i]*2]>0&&mp_r[nums[i]*2]>0) trip=(trip+1LL*mp_l[nums[i]*2]*mp_r[nums[i]*2])%m;
            mp_l[nums[i]]++;
            

        }
return trip;
    }
};