class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int profit=0;
        //n^2 complexity
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]<mini)
            mini=prices[i];
            else 
            profit=max(profit,prices[i]-mini);
        }
        return profit;
    }
};
