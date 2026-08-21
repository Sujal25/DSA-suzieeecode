class Solution {
public:
int lodu(vector<int>&dp,string&s,int ind){
    if(ind<0) return 1;
    if(dp[ind]!=-1) return dp[ind];
    int one=0;
    int two=0;
    if(ind>=1){
        int k=(s[ind-1]-'0')*10+(s[ind]-'0');
        if(k>=10&&k<=26) two=lodu(dp,s,ind-2);
    }
    if(s[ind]!='0')
    one=lodu(dp,s,ind-1);
return dp[ind]=one+two;

}
    int numDecodings(string s) {
        int n=s.size();
        vector<int> dp(n,-1);
        return lodu(dp,s,n-1);
    }
};