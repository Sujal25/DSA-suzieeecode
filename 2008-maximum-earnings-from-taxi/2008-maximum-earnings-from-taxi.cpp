class Solution {
public:


long long solve(int ind,vector<long long>&dp,vector<vector<int>>&ri){
    if(ind==ri.size()) return 0;
    if(dp[ind]!=-1) return dp[ind];
    long long take=ri[ind][1]-ri[ind][0]+ri[ind][2];
    long long skip=solve(ind+1,dp,ri);
    int next=ind+1;
    //while(next<ri.size()&&ri[ind][1]>ri[next][0]) next++;
    int r=ri.size();
    while(next<r){
        int mid=(r-next)/2+next;
        if(ri[ind][1]<=ri[mid][0]) r=mid;
        else next=mid+1;
    }
    take+=solve(next,dp,ri);
    return dp[ind]=max(take,skip);
}
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        int ind =rides.size();
        
        sort(rides.begin(),rides.end());
        vector<long long> dp(ind,-1);
return solve(0,dp,rides);

    }
};
//its look like do prob 
//we have to use some data str whch track visi pt 
//we can sort acc to cond 