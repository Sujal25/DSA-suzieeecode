class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vot=nums[0];
        int cnt=0;

        for(int i=1;i<nums.size();i++){
            
            if(nums[i]!=vot){
                  if(cnt==0) vot=nums[i];
                  else
                cnt--;
              
            }
            else cnt++;
        }
        return vot;
    }
};