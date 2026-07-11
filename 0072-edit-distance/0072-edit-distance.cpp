class Solution {
public:
int mk(int i,int j,vector<vector<int>>&dp,string&w1,string&w2){
    if(i<0&&j<0) return 0;
    if(i<0||j<0) return 1+max(i,j);
    if(dp[i][j]!=-1) return dp[i][j];
    if(w1[i]==w2[j]) return dp[i][j]=mk(i-1,j-1,dp,w1,w2);
    return dp[i][j]=1+min({mk(i-1,j,dp,w1,w2),mk(i-1,j-1,dp,w1,w2),mk(i,j-1,dp,w1,w2)});
}
    int minDistance(string word1, string word2) {
        int i=word1.size();
        int j=word2.size();
        vector<vector<int>> opr(i,vector<int>(j,-1));
        if(i==0&&j==0) return 0;
    return mk(i-1,j-1,opr,word1,word2);
    }
};
//insert delet  and replace 