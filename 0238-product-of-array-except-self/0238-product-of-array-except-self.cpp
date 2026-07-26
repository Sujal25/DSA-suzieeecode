class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n,1);
        vector<int> right(n,1);
        int l=1;
        int r=1;
        for(int i=0;i<n;i++){
            l*=nums[i];
            r*=nums[n-i-1];
            left[i]=l;
            right[n-i-1]=r;
            
        }
        vector<int> ans(n,1);
        for(int i=1;i<n-1;i++){
            ans[i]=right[i+1]*left[i-1];
        }
        ans[0]=right[1];
        ans[n-1]=left[n-2];
        return ans;
    }
};