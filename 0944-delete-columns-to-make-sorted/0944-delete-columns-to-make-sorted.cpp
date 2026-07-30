class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
         int ans=0;
    int len=strs[0].size();
    for(int j=0;j<len;j++){
        string k="";
 for(int i=0;i<strs.size();i++){
        k+=strs[i][j];
     }
     string p=k;
     sort(k.begin(),k.end());
     if(k!=p) ans++;
     
    }
    

return ans;
    }
};