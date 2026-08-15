class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long pro=1;
        int i=0;
        int j=0;
        int len=0;
        while(j<nums.size()){
            pro*=nums[j];
            while(i<=j&&pro>=k){
                pro/=nums[i];
                i++;
                
            }
           len+=(j-i)+1;
            j++;
            
        }
        int p=nums.size();
return len;
    }
};