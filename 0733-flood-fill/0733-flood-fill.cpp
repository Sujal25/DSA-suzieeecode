class Solution {
public:
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color) return image;
       int m=image.size();
       int n=image[0].size();
       int cl=image[sr][sc];
       image[sr][sc]=color;
       queue<pair<int,int>> q;
       q.push({sr,sc});
       while(!q.empty()){
        auto k=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int r=k.first+dx[i];
            int c=k.second+dy[i];
            if(r>=0&&c>=0&&r<m&&c<n&&image[r][c]==cl){
                q.push({r,c});
                image[r][c]=color;
            }
        }

       }
return image;
    }
};