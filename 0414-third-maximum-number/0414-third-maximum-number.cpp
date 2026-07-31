class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int ans=maxi;
        int a=1;
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<maxi) {
                maxi=nums[i];
                a++;
                if(a==3) return maxi;
            }
        }
        return ans;
    }
};