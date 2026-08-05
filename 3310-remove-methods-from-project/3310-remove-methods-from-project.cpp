class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);
        for(auto&inv:invocations){
            adj[inv[0]].push_back(inv[1]);
        }
        vector<int> sus(n,0);
        queue<int> qt;
    
        qt.push(k);
        while(!qt.empty()){
            int ng=qt.front();
            qt.pop();
            if(sus[ng]) continue;
            sus[ng]=1;
            for(int n:adj[ng]){
                if(!sus[n]) qt.push(n);
            }
        }
        for(auto i:invocations){
            if(!sus[i[0]]&&sus[i[1]]){
                vector<int> an;
                for(int i=0;i<n;i++) an.push_back(i);
                return an;
            }
        }
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(!sus[i]) ans.push_back(i);
    }
return ans;
    }
};
// project having n method 0 to n-1; given n,k 
// make dir graph using ino and the n use bfs remove all then ng of k 
//if wany non sus invoke suss then not remove any 