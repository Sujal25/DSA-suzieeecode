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
    bool wordBreak(string s) {
       
        int n=s.size();
       
        vector<int> dp(n,-1);
    return sol(dp,s,n-1);
    }

    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
         for(auto &s:words) mp[s]++;
         vector<string> ans;
         for(int i=0;i<words.size();i++){
            mp.erase(words[i]);
            if(wordBreak(words[i])) ans.push_back(words[i]);
            mp[words[i]]++;
         }
         return ans;
    }
};