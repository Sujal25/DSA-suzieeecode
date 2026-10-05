class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
    int m=mat.size();
    int n=mat[0].size();
     vector<vector<int>> ans(m,vector<int>(n,-1));
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            int s=0;
            for(int b=i-k;b<=i+k;b++){
                if(b<0||b>=m) continue;
                for(int c=j-k;c<=j+k;c++){
                     if(c<0||c>=n) continue;
                        s+=mat[b][c];
                }
            }
            ans[i][j]=s;
        }
     }

return ans;
    }
};