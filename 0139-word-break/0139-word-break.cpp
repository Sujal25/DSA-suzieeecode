class Solution {
public:
 unordered_map<string,int> mp;
int sol(vector<int>&dp,string&s,int ind){
    if(ind<0) return 1;
    if(dp[ind]!=-1) return dp[ind];
    string k="";
    for(int i=ind;i>=0;i--){
        k=s[i]+k;
        if(mp.find(k)!=mp.end()){
           if(sol(dp,s,i-1)) return dp[i]=1;
        }
    }
    return dp[ind]=0;
    
}
    bool wordBreak(string s, vector<string>& wordDict) {
       
        int n=s.size();
        for(auto &s:wordDict) mp[s]++;
        vector<int> dp(n,-1);
    return sol(dp,s,n-1);
    }
};