class Solution {
public:
unordered_map<string,int> mp;
int ans=1;
int chk(string s){
    if(mp[s]<0) return -mp[s];
    int best=1;
    for(int i=0;i<s.size();i++){
        string k = s;
k.erase(i, 1);
if(mp.find(k)!=mp.end()) {
 best=max(best,1+chk(k));}
    }
    mp[s]=-best;
        return best;
    
}
    int longestStrChain(vector<string>& words) {
      
      for(auto &s:words) mp[s]=1;
    
      
for(int i=0;i<words.size();i++){
    ans=max(ans,chk(words[i]));
}

return ans;
    }
};
