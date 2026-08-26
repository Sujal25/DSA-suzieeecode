class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        vector<int> a;
        for(int x:nums){
            mp[x]++;
            if(mp[x]>n/3){
                mp[x]=-n;
                 a.push_back(x);}
        }
        return a;
    }
};