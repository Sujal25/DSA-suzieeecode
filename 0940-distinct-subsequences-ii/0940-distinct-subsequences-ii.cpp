class Solution {
public:
int m=1e9+7;
unordered_map<string,int> mp;
// only mistak is have to consider str in dpo 
//vector<vector<unordered_map<string, int>>> &dp
int sub(string&s,int ind,string l){
    if(ind<0) {
        if(mp[l]>0) return 0;
        mp[l]++;
        return 1;}
    
    int k=sub(s,ind-1,s[ind]+l);
    int b=sub(s,ind-1,l);
    return (k+b)%m;


}

int ans(string &s,int ind,vector<vector<long long>>&dp,long long c){
    if(ind<0) return 1;
    if(dp[ind][c]!=-1) return dp[ind][c];
    // use dp to analysis str ending with that char 
    // take that then updt c otherwise skipp 
    long long p = 0;
    int curr = s[ind] - 'a';
    if (c == 26 || curr != c) {
        p = ans(s, ind - 1, dp, curr);
    }
    long long q=ans(s,ind-1,dp,c);
    return dp[ind][c]=(p+q)%m;
}
    int distinctSubseqII(string s) {
        
        int n=s.size();
        if(n==0) return 0;
     
        
        vector<vector<long long>> dp(n,vector<long long>(27,-1));
       int a = ans(s, n - 1, dp, 26);

// remove empty subsequence
a = (a - 1 + m) % m;
        return a;
    }
};

// other app is using dp and store the sub ending with that char and add them 