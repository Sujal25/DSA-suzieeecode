class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x:nums) mp[x]++;
        for(int i=1;i<1e4;i++){
            if(!mp.count(k*i)) return k*i;
        }
        return -1;
    }
};