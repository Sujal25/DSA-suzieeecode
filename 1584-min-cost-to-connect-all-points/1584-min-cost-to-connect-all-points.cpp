class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size();
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                adj[i].push_back({j,abs(points[i][0]-points[j][0])+abs(points[i][1]-points[j][1])});//point,dist
            }
        }
vector<int> vis(n,0);
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
pq.push({0,0});
int mstWeight = 0;
while(!pq.empty()){
    auto no=pq.top();
    pq.pop();
    int pt=no.second;
    int cost=no.first;
    if(vis[pt]) continue;
    vis[pt]=1;
    mstWeight+=cost;
    for(auto ng:adj[pt]){
        if(!vis[ng.first]){
            pq.push({ng.second,ng.first});
        }
    }
}
return mstWeight;
    }
};
//hr popint ka hrr point k sath dist krke graph bnao thn fiund the min posible dist 
//given points-->x,y
//csot is manthan dist min cost to make all connnected 