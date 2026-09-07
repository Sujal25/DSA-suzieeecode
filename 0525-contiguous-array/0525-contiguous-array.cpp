class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) nums[i]=-1;
        }

     int len=0;
      unordered_map<int,int> mp;
      mp[0]=-1;
      int sum=0;
     for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(mp.find(sum)!=mp.end()){
            len=max(len,i-mp[sum]);
        }

        else 
        mp[sum]=i;
     }
      return len;
    }
};
//second one is make all zero to -1
/* while(j<nums.size()){
        mp[nums[j]]++;
        if(mp[1]==mp[1]) ans=max(ans,j-i+1);
        while(mp[1]!=mp[0]){
            mp[nums[i]]--;
            if(mp[nums[i]]==0) mp.erase(nums[i]);
            i++;
        }
        j++;
      }  */