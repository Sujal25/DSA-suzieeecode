class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> a;
        k=nums.size()-k;
        for(int i=0;i<nums.size();i++){
            while(!a.empty()&&k>0&&a.back()>nums[i]){
                a.pop_back();
                k--;

            }
            a.push_back(nums[i]);
        }
        while(k--) a.pop_back();
        return a;
    }
};
//given nums,int k return subseq of size k 