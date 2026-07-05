class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            string k=to_string(nums[i]);
            sort(k.begin(),k.end());
            int dif=k.back()-k.front();
            mp[dif]+=nums[i];
           
        }
        int maxi=0;
        for(auto&p:mp){
            maxi=max(maxi,p.first);
        }
       
return mp[maxi];
    }
};
//given integer arr