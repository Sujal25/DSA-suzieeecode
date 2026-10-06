class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<char,int> mp;  
      vector<pair<string,string>> mk;
      for(auto s:strs){
        string p=s;
        sort(p.begin(),p.end());
        mk.push_back({p,s});
      }
      sort(mk.begin(),mk.end());
      vector<vector<string>> kt;
      vector<string> k;
      string l=mk[0].first;
      for(int i=0;i<mk.size();i++){
        if(l==mk[i].first){
            k.push_back(mk[i].second);
        }
        else{
            kt.push_back(k);
            l=mk[i].first;
            k.clear();
             k.push_back(mk[i].second);
        }
      }
       kt.push_back(k);
      return kt;
    }
};
//