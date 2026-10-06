class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int sb=0;
       int s=0;
      
unordered_map<int,int> mp;
 mp[0]=1;
for(int i=0;i<nums.size();i++){
    s+=nums[i];
    if(mp[s-k]>0) sb+=mp[s-k];
    mp[s]++;
}
        return sb;
    }
};