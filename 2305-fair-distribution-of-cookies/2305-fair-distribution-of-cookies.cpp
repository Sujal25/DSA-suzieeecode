class Solution {
public:
int ans=INT_MAX;
void cook(vector<int>&dist,vector<int>&c,int ind){
if(ind==c.size()){
    int ck=INT_MIN;
    for(int x:dist) ck=max(ck,x);
    ans=min(ans,ck);
    return;
}
for(int i=0;i<dist.size();i++){
dist[i]+=c[ind];
cook(dist,c,ind+1);
dist[i]-=c[ind];
}
}
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> dist(k,0);
        cook(dist,cookies,0);
        return ans;
    }
};
//cookiee
//max unfairness of a distribution is defined as the maximum total cookies obtained by a single child in the distribution.
//sum of all then diveid by k and then make sem and sum of those just less then or ewual to 