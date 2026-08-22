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
/*class Solution {
public:
unordered_map<string,int> mp;
int ans=1;
void chk(string s,int l){
    for(int i=0;i<s.size();i++){
        string k = s;
k.erase(i, 1);
if(mp.find(k)!=mp.end()) {chk(k,l+1);
 ans=max(ans,l);}
    }
        return ;
    
}
    int longestStrChain(vector<string>& words) {
      
      for(auto &s:words) mp[s]++;
      int len=1;
      sort(words.begin(),words.end(),[](const string a,const string b){
        return a.size()>b.size();
      });

for(int i=0;i<words.size();i++){
    chk(words[i],2);
}
if(ans==0) return 1;
return ans;
    }
};*/
