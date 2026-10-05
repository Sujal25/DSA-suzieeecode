class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> loss;
        for(auto k:matches){
            loss[k[1]]++;
        }
        vector<int> l;
        vector<int> w;
        for(auto k:matches){
            if(loss[k[1]]==1) l.push_back(k[1]);
            if(loss.find(k[0])==loss.end()) {w.push_back(k[0]);
            loss[k[0]]++;
}
        }
        
    sort(l.begin(),l.end());
    sort(w.begin(),w.end());
        return {w,l};
    }
};