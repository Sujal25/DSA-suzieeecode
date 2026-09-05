class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        if(nums.back()<lower) return {{lower,upper}};
    int low=lower;
    int upr=lower;
        vector<vector<int>> ans;
        for(int x:nums){
            if (x < lower) continue;
            if(x>upper) break;
            if(x==upr){
                upr++;
                low++;
            }
            else if(x>upr){
                upr=x-1;
                ans.push_back({low,upr});
                low=x+1;
                upr=x+1;
            }

        }
        if (low <= upper) {
            ans.push_back({low, upper});
        }

       return ans;
    }
};
//low and upr 
/* sort(nums.begin(),nums.end());
         if(nums.back()<lower) return {{lower,upper}};
        int upr=lower;
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]>upr){
                ans.push_back({lower,nums[i]-1});
                lower=nums[i]+1;
                upr=lower;
            }
           
        }

      ans.push_back({nums.back()+1,upper});
      
        return ans;*/