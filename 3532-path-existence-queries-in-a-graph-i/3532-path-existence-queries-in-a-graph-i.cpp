class Solution {
public:
 vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) { 
vector<int> comp(n);
comp[0]=0;
for(int i=1;i<nums.size();i++){
    if(nums[i]-nums[i-1]<=maxDiff){
        comp[i]=comp[i-1];
    }
    else comp[i]=i;
}
vector<bool> ans;
for(auto &q:queries){
    ans.push_back(comp[q[0]]==comp[q[1]]);
}
return ans;
 }

};/*
bool dfs(int s,int d,vector<vector<int>>&adj,vector<int>&vis,int t){
    if(s==d) return true;
    vis[s]=t;
    for(auto &e:adj[s]){
        if(vis[e]!=t){
            if(dfs(e,d,adj,vis,t)) return true;
        }
    }

    return false;
}
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<vector<int>> adj(n);
        for(int i=0;i<nums.size();i++){
            int idx =upper_bound(nums.begin(),nums.end(),maxDiff+nums[i]) - nums.begin()-1;
            while(i<idx){
                adj[i].push_back(idx);
                adj[idx].push_back(i);
                idx--;
            }
        }
        
      
        vector<bool> ans;
        vector<int> vis(n,0);
        int timer=1;
        for(auto &q:queries){
            
            ans.push_back(dfs(q[0],q[1],adj,vis,timer));
            timer++;
        }
return ans;

    }

};
//nums[j]<=max+nums[i]

n is nodes 0===n-1
numssortes and int maaxdif
edge exist if diff is atmostmaxdiff


*/