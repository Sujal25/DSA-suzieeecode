class Solution {
public:
    pair<long long ,vector<int>> inter(vector<vector<int>>& intervals,int ind,int k,vector<vector<pair<long long ,vector<int>>>>&dp,vector<int>&prev){
        if(k==0||ind<0) return {0,{}};
        if(dp[ind][k].first!=-1) return dp[ind][k];
        //two poptin take or skip 
        auto notake=inter(intervals,ind-1,k,dp,prev);
        auto take=inter(intervals,prev[ind],k-1,dp,prev);
        take.first+=intervals[ind][2];
        take.second.push_back(intervals[ind][3]);
        if (take.first > notake.first)
            return dp[ind][k] = take;

       if (take.first < notake.first)
            return dp[ind][k] = notake;

        // Same sum -> lexicographically smaller
        sort(take.second.begin(),take.second.end());
        sort(notake.second.begin(),notake.second.end());
        if (take.second < notake.second)
            return dp[ind][k] = take;

        return dp[ind][k] = notake;
    }
    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n=intervals.size();
         
for (int i = 0; i < n; i++) {
            intervals[i].push_back(i);
        }

        vector<vector<pair<long long ,vector<int>>>> dp(n,vector<pair<long long ,vector<int>>>(5,{-1,{}}));
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a,const vector<int>&b){
            return a[1]<b[1];
        });
        vector<int> ends(n);

for (int i = 0; i < n; i++)
    ends[i] = intervals[i][1];

vector<int> prev(n, -1);

for (int i = 0; i < n; i++) {
    int j = lower_bound(ends.begin(), ends.begin() + i, intervals[i][0])
            - ends.begin();

    prev[i] = j - 1;
}

auto ans=inter(intervals,n-1,4,dp,prev);
sort(ans.second.begin(),ans.second.end());
return ans.second;

    }
};