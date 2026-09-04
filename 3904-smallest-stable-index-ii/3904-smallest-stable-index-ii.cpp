class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
      vector<int> a(n,0);
      int maxi=INT_MIN;
      int mini=INT_MAX;
      for(int i=nums.size()-1;i>=0;i--){
        mini=min(mini,nums[i]);
        a[i]=mini;
      }
      for(int i=0;i<nums.size();i++){
        maxi=max(maxi,nums[i]);
        if(maxi-a[i]<=k) return i;


      }
return -1;
    }
};
/*
this gives tle 

 int n=nums.size();
        for(int i=0;i<n;i++){
            int maxi=*max_element(nums.begin(),nums.end()-n+i+1);
            int mini=*min_element(nums.begin()+i,nums.end());
            if(maxi-mini<=k) return i;
        }
        return -1; */