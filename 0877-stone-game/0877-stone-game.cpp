class Solution {
public:
/*bool win(int i,int j,vector<int>&p,int sc1,int sc2,int t){
    if(i>j) return sc1>=sc2;
    if(t==0){
        return win(i+1,j,p,sc1+p[i],sc2,1)||win(i,j-1,p,sc1+p[j],sc2,1);
    }
    else {
        return win(i+1,j,p,sc1,sc2+p[i],0)&&win(i,j-1,p,sc1,sc2+p[j],0);
    }


}*/
int win(int i,int j,vector<int>&p,vector<vector<int>>&dp){
    if(i>j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];

    int l=p[i]-win(i+1,j,p,dp);
    int r=p[j]-win(i,j-1,p,dp);
    return dp[i][j]=max(l,r);

}
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
       return win(0,n-1,piles,dp); 
    }
};
//a nd b play 
//for this recursion not workd as 2^n