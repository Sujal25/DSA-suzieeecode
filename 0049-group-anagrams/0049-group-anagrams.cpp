class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
unordered_map<string, vector<string>> mp;

for (string s : strs) {
    string key = s;
    sort(key.begin(), key.end());
    mp[key].push_back(s);
    }
    vector<vector<string>> st;
    for(auto &m:mp) st.push_back(m.second);
    return st;
    }
};
/*class Solution {
public:
bool chk(string s,string p){
    unordered_map<char,int> mp;
    if(s.size()!=p.size()) return false;
    for(char c:s) mp[c]++;
    for(char c:p){
        if(!mp.count(c)) return false;
        mp[c]--;
        if (mp[c]<0) return false;
    }
    return true;
}
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> st;
        for(int i=0;i<strs.size();i++){
            if(strs[i]=="") continue;
            vector<string> s;
            s.push_back(strs[i]);
            for(int j=i+1;j<strs.size();j++){
                if(chk(strs[i],strs[j])) {
                    s.push_back(strs[j]);
                    strs[j]="";
                }
            }
            st.push_back(s);
        }
        return st;
    }
};
unordered_map<string, vector<string>> mp;

for (string s : strs) {
    string key = s;
    sort(key.begin(), key.end());
    mp[key].push_back(s);
}*/