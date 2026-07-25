class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote=0;
        int k=nums[0];
        for(int i=0;i<nums.size();i++){
            if(vote==0) k=nums[i];
            if(nums[i]==k) vote++;
            else vote--;
        }
        return k;

    }
};