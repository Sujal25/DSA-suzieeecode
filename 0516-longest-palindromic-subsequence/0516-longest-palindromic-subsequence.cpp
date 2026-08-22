class Solution {
public:
int lcs(string&s,string&k,int i,int j,vector<vector<int>>&dp){
if(i<0||j<0) return 0;
if(dp[i][j]!=-1) return dp[i][j];

if(s[i]==k[j]){
    return dp[i][j]=1+lcs(s,k,i-1,j-1,dp);
} 

return dp[i][j]=max(lcs(s,k,i-1,j,dp),lcs(s,k,i,j-1,dp));;
}
    int longestPalindromeSubseq(string s) {
        string k=s;
        int n=k.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));

        reverse(s.begin(),s.end());
        return lcs(s,k,n-1,n-1,dp);
    }
};
/*

// lonng commmon subseq between this and revere of thsi 
this is recursive approach 
class Solution {
public:
bool palli(string s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int len=0;
void chk(string &s,string k,int ind){
    if(ind<0) {
         if(palli(k)) len=max(len,(int)k.size());
        return;}
   
    k.push_back(s[ind]);
    chk(s,k,ind-1);
    k.pop_back();
    chk(s,k,ind-1);
}
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        string k="";
        chk(s,"",n-1);
        return len;
    }
};*/