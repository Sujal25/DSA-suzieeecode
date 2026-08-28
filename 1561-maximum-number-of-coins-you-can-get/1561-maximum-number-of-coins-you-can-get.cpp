class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int ans=0;
        int n=piles.size()-2;
        int k=piles.size()/3;
        for(int i=n;i>=k;i-=2){
            ans+=piles[i];
        }
        return ans;
    }
};