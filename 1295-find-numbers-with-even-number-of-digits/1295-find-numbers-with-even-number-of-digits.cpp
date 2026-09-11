class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int x:nums){
            string p=to_string(x);
            if(p.size()%2==0) ans++;
        }
        return ans;
    }
};
