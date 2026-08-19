class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int maxi=0;
        vector<vector<int>> mat(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='1') mat[i][j]=1;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1&&i>0&&j>0){
                    mat[i][j]=1+min({mat[i-1][j-1],mat[i][j-1],mat[i-1][j]});
                }
                maxi=max(maxi,mat[i][j]);
            }
        }
        return maxi*maxi;
    }
};