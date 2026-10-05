class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool r[9][10] = {};
bool c[9][10] = {};
bool b[9][10] = {};
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int k = (i / 3) * 3 + (j / 3);
                int d=board[i][j]-'0';
                if(board[i][j]=='.') continue;

                if(r[i][d]||c[j][d]||b[k][d]){
                   return false;
                }
                 r[i][d]=true;
                    c[j][d]=true;
                    b[k][d]=true;
                
            }
        }
        return true;
    }
};
//solve the soduku or false eirthr