class Solution {
public:
    long long maxProduct(vector<int>& nums) {
      int m=1e5;
      int n=nums.size();
      sort(nums.begin(),nums.end());
      long long a=0,b=0,c=0;
      a=1LL*nums[0]*nums[1];
      b=1LL*nums[n-1]*nums[n-2];
      c=1LL*nums[0]*nums[n-1];
    if(a<0) a=a*-1*m;
    else a*=m;
    if(b<0) b=b*-1*m;
    else b*=m;
    if(c<0) c=c*-1*m;
    else c*=m;
    return max({a,b,c});
    }
};