class Solution {
public:
int ans=0;
int tar;
void exp(vector<int>&nums,int ind,string&s,int sum){
    if(ind==nums.size()){
        if(sum==tar)
        ans++;
        return;
    }
    
    s.push_back('-');
    exp(nums,ind+1,s,sum-nums[ind]);
    s.pop_back();


    s.push_back('+');
    exp(nums,ind+1,s,sum+nums[ind]);
    s.pop_back();
}
    int findTargetSumWays(vector<int>& nums, int target) {
        string a="";
tar=target;
        exp(nums,0,a,0);
        return ans;

    }
};
