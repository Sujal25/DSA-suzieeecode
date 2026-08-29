class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        unordered_map<int,int> mp;
        int n=barcodes.size();
        for(int i:barcodes) mp[i]++;
        int maxi=0;
        int a;
        for(auto &g:mp){
          if(maxi<g.second){
            maxi=g.second;
            a=g.first;
          }
        }
        int k=0;
        vector<int> ans(n,0);
        while(mp[a]>0){
            ans[k]=a;
            k+=2;
            mp[a]--;
        }
        for(auto &g:mp){
            while(g.second>0){
                if(k>=n) k=1;
                ans[k]=g.first;
                k+=2;
                g.second--;
            }
        }
       return ans;
    }
};