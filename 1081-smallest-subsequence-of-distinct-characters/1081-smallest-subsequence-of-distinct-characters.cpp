class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> cnt(26,0);
        vector<bool> used(26,false);
        string result;
        for(char c:s) cnt[c-'a']++;
        for(char c:s){
            int x=c-'a';
            cnt[x]--;
            if(used[x]) continue;
            while(!result.empty()&&result.back()>c&&cnt[result.back() - 'a']>0){
                char last=result.back();
                
                used[last-'a']=false;
                result.pop_back();
            }
            result.push_back(c);
            used[x]=true;
        }
        return result;
    }
};

//stack lifo
//vector<string haivng all sub seq and also map which store the the presence of char >
/*class Solution {
public:vector<string> ans;
unordered_map<char,int> mp;
void all(string&s,int j,string t){
    if(mp.empty()){
        ans.push_back(t);
        return;
    }
    if(j==s.size()) return;
    if(mp.count(s[j])){
        t.push_back(s[j]);
        mp.erase(s[j]);
        all(s,j+1,t);
        t.pop_back();
    mp[s[j]]=1;
    }
    
    all(s,j+1,t);
}
    string smallestSubsequence(string s) {
        ans.clear();
        mp.clear();
        for(char c:s) mp[c]=1;
all(s,0,"");
sort(ans.begin(),ans.end());
return ans[0];
    }
};*/