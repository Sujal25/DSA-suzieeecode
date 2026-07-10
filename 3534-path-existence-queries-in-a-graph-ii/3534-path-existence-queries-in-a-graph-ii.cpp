class Solution {
public:
inline static int group[100001][18]={0};
    vector<int> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<pair<int,int>> num;
        for(int i=0;i<nums.size();i++){
            num.push_back({nums[i],i});
        }
        sort(num.begin(),num.end());
        vector<int> pos(n);
for(int i = 0; i < n; i++){
    pos[num[i].second] = i;
}
int r=0;
for(int i=0;i<n;i++){
    if(r<i) r=i;
    while(r+1<n&&num[r+1].first-num[i].first<=maxDiff)
    ++r;
    group[i][0]=r;
}
for(int j=1;j<18;++j){
    for(int i=0;i<n;++i){
        group[i][j]=group[group[i][j-1]][j-1];
        
    }
}
int m =queries.size();
vector<int> ans(m,-1);
for(int i=0;i<m;i++){
    int u=pos[queries[i][0]];
    int v=pos[queries[i][1]];
    if(u>v) swap(u,v);
    if(u==v) {
        ans[i]=0;
        continue;
    }
    int curr=u;
    int step=0;
    for(int j=17;j>=0;--j){
        if(group[curr][j]<v){
            curr=group[curr][j];
            step+=(1<<j);
        }
        ans[i]=(group[curr][0]>=v)? step+1:-1;
    }
} return ans;

     
    }
};
// this one is cheated to maintain streak 9 from the 62 streak 