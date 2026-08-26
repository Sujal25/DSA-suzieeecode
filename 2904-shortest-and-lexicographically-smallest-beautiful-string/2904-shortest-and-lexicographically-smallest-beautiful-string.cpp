class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<string> ans;
        int i=0;
        int j=0;
        unordered_map<char,int> mp;
        while(j<s.size()){
            mp[s[j]]++;
           while(mp['1']>=k){
            if(mp['1']==k) ans.push_back(s.substr(i,j-i+1));
            mp[s[i]]--;
            if(mp[s[i]]==0) mp.erase(s[i]);
            
            i++;
           }
          
            
            j++;

        }
sort(ans.begin(),ans.end(), [](string &a, string &b) {
    if(a.size() != b.size())
        return a.size() < b.size();
    return a < b;
});
if(ans.empty()) return "";
return ans[0];
    }
};
//given bs and int k beuati if no if 1 is k all substr with len and sort then to f=get it 