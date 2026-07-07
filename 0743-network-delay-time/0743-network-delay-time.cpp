class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(auto &t:times){
            adj[t[0]].push_back({t[1],t[2]});

        } 
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> dist(n + 1, INT_MAX);
        
       dist[k]=0;
        pq.push({0,k});
        while(!pq.empty()){
            auto k=pq.top();
            pq.pop();
            int node=k.second;
            int time=k.first;
            if(time>dist[node]) continue;
    
      
            for(auto ng:adj[node]){
                if(dist[ng.first]>time+ng.second){
                    dist[ng.first]=time+ng.second;
                    pq.push({dist[ng.first],ng.first});
                }
            }
        }
        int ans=0;
        for(int i=1;i<dist.size();i++){
            if(dist[i]==INT_MAX) return -1;
            ans=max(ans,dist[i]);
        }
return ans;
    }
};