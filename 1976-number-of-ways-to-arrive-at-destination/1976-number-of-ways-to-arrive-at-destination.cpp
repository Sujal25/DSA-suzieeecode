class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> adj(n);//city,timr
        for(auto &r:roads){
            adj[r[0]].push_back({r[1],r[2]});
            adj[r[1]].push_back({r[0],r[2]});
        }
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;
        vector<long long> dist(n,LLONG_MAX);
        vector<int> way(n,0);
        dist[0]=0;
        pq.push({0,0});
        way[0]=1;
        int mod=1e9+7;
        while(!pq.empty()){
            auto k=pq.top();
            pq.pop();
           
            long long t=k.first;
            int i=k.second;
            if (t > dist[i]) continue;
            for(auto ng:adj[i]){
                if(dist[ng.first]>t+ng.second){
                    dist[ng.first]=t+ng.second;
                    way[ng.first]=way[i];
                    pq.push({t+ng.second,ng.first});
                }
                else if(dist[ng.first]==t+ng.second){
                    way[ng.first]=(way[ng.first]+way[i])%mod;
                }
            }
        }
       return way[n-1];


    }
};
// frst find shortest time then no of wy to reach wth that time is cal 
//n--n-1 bidirectional 