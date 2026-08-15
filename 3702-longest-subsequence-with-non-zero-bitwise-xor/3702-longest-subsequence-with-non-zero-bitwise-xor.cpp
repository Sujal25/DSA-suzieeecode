class Solution {
public:
int len=0;
void rec(vector<int>&v,int ind,int xr,int t){
    if(ind<0){
        if(xr!=0) len=max(len,t);
        return;
    }
    rec(v,ind-1,xr^v[ind],t+1);
    rec(v,ind-1,xr,t);
}
    int longestSubsequence(vector<int>& nums) {
       /* int n=nums.size();
        //rec(nums,n,0,0);

        int xr=0;
        int len=0;
        int prev;
        
        int s=0;
        for(int i=0;i<n;i++){
            prev=xr;
            xr^=nums[i];
            if(nums[i]==0) continue;
            if(xr==0) {xr=prev;
            s++;}
        }
        return n-s;;*/
        int xr=0;
        bool non=false;
        for(int x:nums){
            xr^=x;
            if(xr!=0)
            non=true;
        }
        if(xr!=0) return nums.size();
        if(non) return nums.size()-1;
        return 0;
    }
};
//can we do using boid recurssion but tle so use dp for that 