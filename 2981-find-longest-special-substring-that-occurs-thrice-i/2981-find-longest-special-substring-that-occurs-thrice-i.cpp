class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string,int> mp;
      for(int i=0;i<s.size();i++){
        char c=s[i];
        string p="";
        for(int j=i;j<s.size();j++){
            if(s[j]!=c) break;
            p+=s[j];
            mp[p]++;
        }
      }  
      int ans=-1;
      for(auto &i:mp){
        string l=i.first;
        if(i.second>=3) ans=max(ans,(int)l.size());
      }
      return ans;

    }
};