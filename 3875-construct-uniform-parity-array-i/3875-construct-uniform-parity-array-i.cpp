class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
       int odd=0;
       int n=nums1.size();
       int even=0;
       for(int x:nums1){
        if(x%2==0) even++;
        else odd++;
       } 
       if(odd==n||even==n) return true;
       return true;
    }
};
//