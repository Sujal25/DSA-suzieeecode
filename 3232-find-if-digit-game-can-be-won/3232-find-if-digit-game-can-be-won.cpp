class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum=0;
        int nm=0;
        for(int x:nums){
            if(x/10>0) nm+=x;
            else
            sum+=x;
        }
        return !(nm==sum);
    }
};
//