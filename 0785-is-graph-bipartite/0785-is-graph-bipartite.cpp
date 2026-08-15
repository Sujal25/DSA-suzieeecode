class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> vis(n,0);
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            if(vis[i]) continue;
            
        q.push({i,1});
       
        vis[i]=1;
        while(!q.empty()){
            auto n=q.front();
            int c=n.second;
            int node=n.first;
            q.pop();
            for(auto k:graph[node]){
                if(vis[k]==c) return false;
                if(!vis[k]){
                    if(c==1){ q.push({k,2});
                vis[k]=2;}
                else{q.push({k,1});
                vis[k]=1;
}
                }
                
            }


        }
        }
return true;
    }
};
//grpah is bipartite if it contain odd len of cycle 