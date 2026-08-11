class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

int n=nums.size();
for(int i=0;i<n;i++){
    while(nums[i]>0&&nums[i]<=n&&nums[i]!=nums[nums[i]-1])
    swap(nums[i],nums[nums[i]-1]);
}
for(int i=0;i<n;i++){
    if(nums[i]!=i+1) return i+1;
}
return n+1;
    }
};
/* this gives tle 
unordered_map<int,int> mp;
        int mini=INT_MAX;
        for(int x:nums) {
        mp[x]++;
        if(x>=1) mini=min(mini,x);}
        if(mini>1) return 1;
        for(int i=1;i<*max_element(nums.begin(),nums.end());i++){
            if(mp[i]>0) continue;
            return i;
        }

return *max_element(nums.begin(),nums.end())+1;
    */