class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mp;
        unordered_map<char,int> fre;
        for(char c:word) fre[c]++;
        vector<pair<char,int>> fr;
        for(auto&m:fre){
            fr.push_back({m.first,m.second});

        }

    sort(fr.begin(),fr.end(),[](auto&a,auto&b){
        return a.second>b.second;
    });
    string a="";
    for(auto &f:fr){
        a+=string(f.second,f.first);
    }
       int cnt=1;
        int ans=0;
       for(char c:a){
        
         if(mp.find(c)==mp.end()){
            if((int)mp.size()==8*cnt){
                cnt++;
            }
            mp[c]=cnt;
         }
        ans+=mp[c];
        
       }
       return ans; 
    }
};