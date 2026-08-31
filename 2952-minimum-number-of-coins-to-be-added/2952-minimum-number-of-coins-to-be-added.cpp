class Solution {
public:

    int minimumAddedCoins(vector<int>& coins, int target) {
        sort(coins.begin(),coins.end());
        /*int sum=0;
        int coin=0;
        int k=0;
        for(int i=1;i<=target;i++){
            if(sum+coin[k]>i){
               k++;
               coin++;
                i=i*2+1;
            }
        }
*/
        int k=0;
        long long sum=0;
        int ans=0;
        while(sum<target){
            if(k<coins.size()&&coins[k]<=sum+1){
                sum+=coins[k];
                k++;

            }
            else{
                ans++;
                sum=sum*2+1;
                
            }
        }
        return ans;
    }
};
// val of coin given 
// find the coin sum arounf tar hwo much less for all 1 to target 
// make all subseq and chk weather reach smu or not if not add that in array and then chk agin 
//chk all no to sum and add req into array  chking ech causing issue in tle 