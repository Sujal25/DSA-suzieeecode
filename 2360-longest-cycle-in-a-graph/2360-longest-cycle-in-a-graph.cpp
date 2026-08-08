class Solution {
public:
int ans=-1;
void dfs(int n,int cnt,vector<int>&dpt,vector<int>&edg,vector<int>&vis){
vis[n]=1;
dpt[n]=cnt;
int ng=edg[n];
if(ng==-1){
    dpt[n]=-1;
    return ;
}
if(vis[ng]){
    if(dpt[ng]!=-1)
    ans=max(ans,cnt-dpt[ng]+1);
    dpt[n]=-1;
return ;
}
dfs(ng,cnt+1,dpt,edg,vis);
dpt[n]=-1;

}
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
        vector<int> vis(n,0);
        vector<int> depth(n,-1);
        for(int i=0;i<n;i++){
            if(!vis[i]) dfs(i,0,depth,edges,vis);
        }
        return ans;
    }
};
/*class Solution {
public:
int ans=-1;
void dfs(int cnt,int st,int ds,vector<vector<int>>&adj,vector<int>&vis){
    vis[ds]=1;
    for(int ng:adj[ds]){
        if (ng == -1) continue;
        if(st==ng) {ans=max(ans,cnt);
        return;}
        if(!vis[ng]) dfs(cnt+1,st,ng,adj,vis);
    }
    
    return;
 }
    int longestCycle(vector<int>& edges) {
  int n=edges.size();
  vector<vector<int>> adj(n);
  for(int i=0;i<edges.size();i++){
    if(edges[i]!=-1)
    adj[i].push_back(edges[i]);
  }      
  
  for(int i=0;i<n;i++){
    vector<int> vis(n,0);
    dfs(1,i,i,adj,vis);
  }
  return ans;
  //use dfs for chk cyle and for long use global varia l 
    }
};
//lets do this one */