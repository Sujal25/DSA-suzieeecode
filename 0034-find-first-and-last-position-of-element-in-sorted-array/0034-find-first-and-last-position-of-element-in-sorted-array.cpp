class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int lo=0;
       int hi=nums.size()-1;
       int a=-1,b=-1;
       while(lo<=hi){
        int mid=(hi-lo)/2+lo;
        if(nums[mid]==target){
            a=mid;
            hi=mid-1;
        }
        else if(nums[mid]<target){

            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
       }
       lo=0;
       hi=nums.size()-1;
       while(lo<=hi){
        int mid=(hi-lo)/2+lo;
        if(nums[mid]==target){
            b=mid;
           lo=mid+1;
        }
        else if(nums[mid]<target){

            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
       }

return {a,b};
    }
};