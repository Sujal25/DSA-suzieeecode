class Solution {
public:
void shift(vector<vector<int>>& grid){
     int m=grid.size();
       int n=grid[0].size();
       int prev=grid[m-1][n-1];
       
       for(int i=0;i<(m*n);i++){
            
            swap(grid[i/n][i%n],prev);

       }

}
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        k=k%(m*n);
      while(k--){
        shift(grid);
      }
        return grid;
    }
};
/*int n=grid.size();
       int m=grid[0].size();
       int temp=grid[m-1][n-1];
       int prev=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                prev=grid[i][j];
                if(prev!=0) grid[i][j]=prev;
            }
        }
        grid[0][0]=temp;
        return grid;*/