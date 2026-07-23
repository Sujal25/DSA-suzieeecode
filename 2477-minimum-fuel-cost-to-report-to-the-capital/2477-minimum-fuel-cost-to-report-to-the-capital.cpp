class Solution {
public:
long long fuel=0;
int seat;
long long dfs(int p,int c,vector<vector<int>>&adj){
    long long people=1;
    for(auto ng:adj[c]){
        if(ng!=p)
        people+=dfs(c,ng,adj);
    }
    if(c!=0){
        fuel+=(people+seat-1)/seat;
    }
    return people;
}
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        fuel=0;
        int n=roads.size()+1;
        vector<vector<int>> adj(n);
        for(auto &e:roads){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        seat=seats;
dfs(-1,0,adj);
return fuel;
    }
};