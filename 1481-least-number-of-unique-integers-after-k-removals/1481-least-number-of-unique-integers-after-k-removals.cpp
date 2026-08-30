class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(int x:arr) mp[x]++;
        vector<int> ans;
        for(auto &m:mp){
            ans.push_back(m.second);
        }
        sort(ans.begin(),ans.end());
        while(k>0){
             if(ans[0] > k) break;
            if(ans[0]<=k){
                k-=ans[0];
                ans.erase(ans.begin());
               
            }
        }
        return ans.size();
    }

};
//remove least freq element till k=0 and return rmeingnunique 