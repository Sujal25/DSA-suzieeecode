class Solution {
public:

int dsub(string&s,string&t,int i,int j,vector<vector<int>>&dp){
    if(j<0) return 1;
    if(i<0&&j>=0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int sub=0;
    int nsub=0;
    int ksub=0;
    if(s[i]==t[j]){
        sub=dsub(s,t,i-1,j-1,dp);
        nsub=dsub(s,t,i-1,j,dp);

    }
    else
    ksub=dsub(s,t,i-1,j,dp);
    return dp[i][j]=sub+nsub+ksub;
}
    int numDistinct(string s, string t) {
        int m=s.size();
        int n=t.size();
       vector<vector<int>> dp(m,vector<int>(n,-1)); 
       return dsub(s,t,m-1,n-1,dp);
    }
};
//first app is recursive 