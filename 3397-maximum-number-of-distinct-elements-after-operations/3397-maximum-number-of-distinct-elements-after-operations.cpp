class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
      int n=nums.size();
      sort(nums.begin(),nums.end());
      int last=INT_MIN;
      int ans=0;
      for(int x:nums){
        int curr=max(x-k,last+1);
        if(curr<=x+k){
            last=curr;
            ans++;
        }
      }
return ans;
    }
};
/*

 sort(nums.begin(),nums.end());
       int b=-k;
       int i=0;
       while(i<nums.size()&&b<=k){
        
        if(i<nums.size()-1&&nums[i]==nums[i+1]){
        nums[i]+=b;
        b++;}
        else 
        nums[i]+=b;
        i++;
       }
      set<int> st;
       for(int x:nums){
st.insert(x);
       }
       return st.size();

*/