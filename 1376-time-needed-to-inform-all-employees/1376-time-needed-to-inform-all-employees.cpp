class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
      
        vector<vector<pair<int,int>>> adj(n);
        
        for(int i=0;i<n;i++){
          if (manager[i] != -1) {
        adj[manager[i]].push_back({i, informTime[manager[i]]});
    }
        }
        vector<int> dist(n,-1);
        queue<int> qt;
        dist[headID]=0;
        qt.push(headID);
        while(!qt.empty()){
            int n=qt.front();
            qt.pop();
            for(auto i:adj[n]){
                
                    dist[i.first]=dist[n]+i.second;
                    qt.push(i.first);

                
            }
        }
        return *max_element(dist.begin(),dist.end());
    }
};
//id from 0 to n-1head with headid direct manger is manager i manager of head is -1 