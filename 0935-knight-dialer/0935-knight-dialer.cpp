class Solution {
public:
int dx[8]={-2,-1,1,2,-1,-2,2,1};
int dy[8]={1,2,2,1,-2,-1,-1,-2};
int m=1e9+7;
int num(vector<vector<vector<int>>>&dp,int n,int p,int q){
    if(p==3&&(q==0||q==2)) return 0;
    if(n==1) return 1;
    if(dp[p][q][n]!=-1) return dp[p][q][n];
    int pos=0;
    for(int i=0;i<8;i++){
        int np=p+dx[i];
        int nq=q+dy[i];
        if(np>=0&&nq>=0&&np<4&&nq<3
        ){
            pos=(pos + num(dp, n - 1, np, nq)) % m;
        }
    }
    return dp[p][q][n]=pos;
    // string at that index how many no are made 
}
    int knightDialer(int n) {
        //dp size shld be 4*3
       
        vector<vector<vector<int>>> dp(4,vector<vector<int>>(3,vector<int>(n+1,-1)));
        int ans=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                if(i==3&&(j==0||j==2)) continue;
                ans=(ans + num(dp, n, i, j)) % m;
            }
        }
        //i think phone vector is not needed 
        //4*3 matrix 
return ans;
    }
};