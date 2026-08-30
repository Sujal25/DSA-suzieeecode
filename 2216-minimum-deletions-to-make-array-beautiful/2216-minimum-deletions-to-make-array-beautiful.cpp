class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int del=0;
       for(int i=0;i<nums.size();i+=2){
        if(i==nums.size()-1) {
            del++;
            continue;
        }
        if(nums[i]==nums[i+1]){
            nums.erase(nums.begin()+i+1);
            del++;
            i -= 2; 
        }
       }
       return del;
    }
};

//v.erase(v.begin() + 2);