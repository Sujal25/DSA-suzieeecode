class Solution {
public:
int con(vector<vector<int>>& roads,int i,int j){
    for(auto &s:roads){
            if(s[0]==i&&s[1]==j||s[1]==i&&s[0]==j) return 1;
        }
        return 0;
}
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> deg(n);
        for(auto &s:roads){
            deg[s[0]]++;
            deg[s[1]]++;
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans=max(ans,deg[i]+deg[j]-con(roads,i,j));
            }
        }
        return ans;
    }
};
