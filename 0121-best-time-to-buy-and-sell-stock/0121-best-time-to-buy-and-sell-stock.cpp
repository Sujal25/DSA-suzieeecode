class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(mini>prices[i]){
                mini=prices[i];
                
            }
            pro=max(pro,prices[i]-mini);
        }
        return pro;
    }
};