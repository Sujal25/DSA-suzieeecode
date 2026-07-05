class Solution {
public:
int mod=1e9+7;
pair<int,int> solve(int i,int j,vector<string>& board,vector<vector<pair<int,int>>>&dp){
if(i<0||j<0) return {INT_MIN,0};
if(board[i][j]=='X') return {INT_MIN,0};
 if(i==0&&j==0) return {0,1};
if(dp[i][j].first!=-1) return dp[i][j];


int best=INT_MIN;
auto a=solve(i-1,j-1,board,dp);
auto b=solve(i-1,j,board,dp);
auto c=solve(i,j-1,board,dp);
best=max({a.first,b.first,c.first});
if(best==INT_MIN) return dp[i][j]={best,0};
int val = 0;
if (board[i][j] >= '1' && board[i][j] <= '9') val = board[i][j] - '0';
int wy=0;
if(a.first==best) wy = (wy + a.second) % mod;;
if(b.first==best) wy = (wy + b.second) % mod;;
if(c.first==best) wy = (wy + c.second) % mod;;
return dp[i][j]={best+val,wy};
}
    vector<int> pathsWithMaxScore(vector<string>& board) {
     int n=board.size();
        vector<vector<pair<int,int>>> dp(n,vector<pair<int,int>>(n,{-1,-1}));
        auto ans = solve(n-1, n-1, board, dp);
        if(ans.first == INT_MIN)

    return {0,0};

return {ans.first, ans.second};
    }
};
//given sq board st from bottom right n-1,n-1 from Sreach top left mark with E other with numeric or  x two moves (ind -1,ind-1),(ind-1,ind),(ind,ind-1) only if no oobs return two int first is max sum of num cahr second is no of such path tkaen mod 