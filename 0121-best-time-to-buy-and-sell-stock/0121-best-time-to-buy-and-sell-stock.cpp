class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int mini=INT_MAX;
      int pro=0;
      for(int i=0;i<prices.size();i++){
        if(prices[i]<mini){
            mini=prices[i];
        }
        else pro=max(pro,prices[i]-mini);
      }
return pro;
       
    }
};/* for(int i=0;i<prices.size()-1;i++){
            int maxi=*max_element(prices.begin()+i+1,prices.end());
            pro=max(pro,maxi-prices[i]);
        }
        return pro;*/