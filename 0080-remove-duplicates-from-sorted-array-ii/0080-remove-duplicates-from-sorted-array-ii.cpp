class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=1;
        bool fg=false;
        int p=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                if(fg==false) fg=true;
                else {
                    nums.erase(nums.begin()+i);
                    i--;
                    p++;
                    }
            }
            else fg=false;
            
        }
        return nums.size();
    }
};
//remove particula elemt from array 