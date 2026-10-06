class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum=0;
        int mxsum=INT_MIN;
        int i=0;
        int j=0;
        while(i<nums.size()){
            sum+=nums[i];
             mxsum=max(mxsum,sum);
            if(0>sum){
                sum=0;
                j=i+1;
            }
           
            i++;
        }
        return mxsum;
    }
};