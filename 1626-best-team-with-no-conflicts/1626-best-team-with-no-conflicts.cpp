class Solution {
public:
int sol(vector<int>&dp,vector<pair<int,int>>&mp,int ind){
    if(ind<0) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int maxi=mp[ind].second;
    for(int i=ind-1;i>=0;i--){
        if(mp[ind].second>=mp[i].second)
        maxi=max(maxi,mp[ind].second+sol(dp,mp,i));
    }
  
    
    return dp[ind]=maxi;
}
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>> mp;
        int n=ages.size();
        for(int i=0;i<ages.size();i++){
            mp.push_back({ages[i],scores[i]});
        }
        sort(mp.begin(),mp.end());
        vector<int> dp(n,-1);
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,sol(dp,mp,i));
        }
        return ans;
    }
};

//make pair whith age and score and sort age in age frm back use take not tka acc to score if can tak add to ind and move till 0