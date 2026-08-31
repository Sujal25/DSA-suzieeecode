class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long sum=0;
        for(int x:nums) sum+=x;
        //as sum 1 make it -4

        long long req=abs(goal-sum);

      
        return (req+limit-1)/limit;
    }
};
//limit and goal 