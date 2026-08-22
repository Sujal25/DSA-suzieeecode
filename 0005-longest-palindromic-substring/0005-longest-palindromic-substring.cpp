class Solution {
public:
bool palli(string& s,int i,int j){
   
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int len=1;
    string longestPalindrome(string s) {
        int n=s.size();
  
        string ans="";
        ans+=s[0];
       for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if (j-i+1<= len)
                    break;
            if(palli(s,i,j)){
                ans=s.substr(i,j-i+1);
                len=j-i+1;
                break;
            }
        }
       }

     
return ans;
    }
};