class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][i]==0) return false;
                if(grid[i][n-i-1]==0) return false;
                if(i==j||j==n-i-1) continue;
                if(grid[i][j]!=0) return false;
               
            }
        }
        
        return true;
    }
};