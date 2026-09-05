class Solution {
public:
    int findGCD(vector<int>& nums) {
        int x=*min_element(nums.begin(),nums.end());
        int y=*max_element(nums.begin(),nums.end());
        
        for(int i=min(x,y);i>=1;i--){
            if(x%i==0&&y%i==0) return i;
        }
        return -1;
    }
};