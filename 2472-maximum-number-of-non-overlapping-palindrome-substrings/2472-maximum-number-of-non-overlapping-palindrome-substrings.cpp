class Solution {
public:
bool palli(string&s,int i,int j){
    int p=j+i-1;
    while(i<p){
        if(s[i]!=s[p]) return false;
        i++;
        p--;
    }
    return true;

}
int kk;
int sub(string&s,int ind,int k,vector<int>& dp,vector<vector<bool>>& pal){
     if (ind >= s.size())
            return 0;
    if(dp[ind]!=-1) return dp[ind];
    int ans= sub(s, ind + 1,k, dp,pal);
    // if len is grater the n k and paali we take or skip else we move to next alway 
    /*
    int t=0;
    int sk=0;
    if(k>=kk&&ind+k<= s.size()&&pal[ind][ind+k-1]){
        t=1+sub(s,ind+k,0,dp,pal);
        
    }
    if(ind+k<s.size()){
        sk=sub(s,ind,k+1,dp,pal);
    }
   */

   for(int j=ind+k-1;j<s.size();j++){
    if(pal[ind][j])
    ans=max(ans,1+sub(s,j+1,k,dp,pal));
   }
    
    return dp[ind]=ans;
    
}
    int maxPalindromes(string s, int k) {
        int n=s.size();
        kk=k;
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
         vector<vector<bool>> pal(n, vector<bool>(n, false));
//this is from gpt 
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {
                if (s[i] == s[j] &&
                    (j - i <= 1 || pal[i + 1][j - 1])) {
                    pal[i][j] = true;
                }
            }
        }
        vector<int> dp2(n,-1);
        return sub(s,0,k,dp2,pal);
    }
};
//give str s aand int k non overlab subsstring len of eafh at least k each is palii return max no of substr 
//select substr k len and more and put in set if pallindrome so lselectio iof len aand strating point is ain thing as this make weather optimal or not its like dp problme state of dp is to be len and k and add in dp whenevrer palikind two case as pallin and len is kat lest can then oadd or move with that str wehen add the make str null and move firther this is all the approach i can be thinking in one go 
//my aapproch give te as i chk opalii each give n3 complexity so use 2d vector palli and chk from it by putting all pallind true/falwe
//now two state dp is main issue for tle use one state which strre till ind i max opalaindrome substr store 