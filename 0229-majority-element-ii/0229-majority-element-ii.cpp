class Solution {
public:

    vector<int> majorityElement(vector<int>& nums) {
       vector<int> a;
       int n=nums.size();
       int cnt=1;
       sort(nums.begin(),nums.end());
       for(int i=1;i<=n;i++){
        
        if(i<n&&nums[i-1]==nums[i]) cnt++;
        
        else { if (cnt > n / 3) {
                    a.push_back(nums[i - 1]);
                }
                cnt = 1;}
       }

       return a;
    }
};