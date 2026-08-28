class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> a;
        a=nums;
        sort(a.begin(),a.end());
        int in=0,fi=0;
        for(int i=0;i<nums.size();i++){
            if(a[i]!=nums[i]) {in=i;
             break;}
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(a[i]!=nums[i]) {fi=i;
             break;}
        }
if(in==fi) return 0;
        return fi-in+1;
    }
};