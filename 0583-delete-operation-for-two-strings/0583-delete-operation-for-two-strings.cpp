class Solution {
public:
int m(string&w1,string&w2,int i,int j,vector<vector<int>>&dp){
   
    if(i<0||j<0) return max(i,j)+1;
    if(dp[i][j]!=-1) return dp[i][j];
    int v=INT_MAX;
    if(w1[i]==w2[j]) 
    v=m(w1,w2,i-1,j-1,dp);
    int q=1+min(m(w1,w2,i-1,j,dp),m(w1,w2,i,j-1,dp));
    return dp[i][j]=min(v,q);


}
    int minDistance(string word1, string word2) {
        int i=word1.size();
        int j=word2.size();
        vector<vector<int>> dp(i,vector<int>(j,-1));
        return m(word1,word2,i-1,j-1,dp);
    }
};
//make the str equal 