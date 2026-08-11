class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        
        unordered_set<int>st;
        
        for(int i:nums){
            st.insert(i);
        }

        int sum = nums[0];
        for(int i = 1;i<n;i++){
            if(nums[i] != nums[i-1]+1)  break;
            sum += nums[i];
        }

        while(st.count(sum)){
            sum++;
        }
        return sum;
    }
};
//smallest int greater then sum 
/*  unordered_map<int,int> mp;
        for(int x:nums) mp[x]++;
        int ans=-1;
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]!=nums[i-1]+1) continue;
            int sum=nums[i-1];
            for(int j=i;j<nums.size();j++){
                if(nums[j]==nums[j-1]+1) sum+=nums[j];
            }
             ans=max(ans,sum);
        }
        while(mp.find(ans)!=mp.end()) ans++;
        return ans;*/