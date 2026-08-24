class Solution {
public:
int sol(vector<vector<int>>&dp,string&s1,string&s2,string&s3,int a,int b,int c){
    if(a<0&&b<0&&c<0) return 1;
     if(a<0){
            if(s2[b]==s3[c])
                return sol(dp,s1,s2,s3,a,b-1,c-1);
            return 0;
        }

        if(b<0){
            if(s1[a]==s3[c])
                return sol(dp,s1,s2,s3,a-1,b,c-1);
            return 0;
        }
    
    if(dp[a][b]!=-1) return dp[a][b];
    int p=0,q=0;
    if(a>=0&&s1[a]==s3[c]){
       p=sol(dp,s1,s2,s3,a-1,b,c-1);
    }
    if(b>=0&&s2[b]==s3[c]){
        q=sol(dp,s1,s2,s3,a,b-1,c-1);
    }
    return dp[a][b]=max(p,q);

}
    bool isInterleave(string s1, string s2, string s3) {
        int a=s1.size();
        int b=s2.size();
        int c=s3.size();
        if(a+b!=c) return false;
        vector<vector<int>> dp(a,vector<int>(b,-1));
return sol(dp,s1,s2,s3,a-1,b-1,c-1);
    }
};
//trvael from back if ind id btih id match that move back 