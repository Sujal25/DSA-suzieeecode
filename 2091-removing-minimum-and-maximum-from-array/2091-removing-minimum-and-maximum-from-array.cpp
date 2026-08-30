class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        if(n==2||n==3) return 2;
        n++;
        int ans=n;
        
        int mini=min_element(nums.begin(),nums.end())-nums.begin()+1;
        int maxi=max_element(nums.begin(),nums.end())-nums.begin()+1;
        ans=min(ans,max(mini,maxi));
        ans=min(ans,n-min(mini,maxi));
        ans=min(ans,min(maxi,mini)+n-max(maxi,mini));
        return ans;

    }
};