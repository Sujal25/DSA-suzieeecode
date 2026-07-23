class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
      int n=nums.size();
      if(n<3) return n;
      return 1<<(32-__builtin_clz(n));
    }
};
//give arr permutatio of no 1 to n 
/* int maxi=*max_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        int ans=maxi;
        if(nums.size()<3){
            ans=nums[0];
            if(nums.size()==2) ans=min(ans,nums[0]^nums[1]);
        }
        for(int i=1;i<nums.size()-1;i++){
            ans=min(ans,nums[i]^nums[i-1]^nums[i+1]);
        }
         if(nums.size()<3){
            ans=nums[0];
            if(nums.size()==2) ans=min(ans,nums[0]^nums[1]);
        }
return maxi-ans+1;




gives tle this one int mx=0;
    int mn=INT_MAX;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=j;k<n;k++){
                int xr=nums[i]^nums[j]^nums[k];
                mn=min(mn,xr);
                mx=max(mx,xr);
            }
        }
    }
    return mx-mn+1;
*/