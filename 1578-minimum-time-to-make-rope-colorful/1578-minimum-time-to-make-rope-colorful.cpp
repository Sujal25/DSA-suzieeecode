class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
       int a=0;
       for(int i=1;i<neededTime.size();i++){
        if(colors[i-1]==colors[i]){
        a+=min(neededTime[i-1],neededTime[i]);
        neededTime[i]=max(neededTime[i],neededTime[i-1]);}
       }
       return a;
    }
};
/* vector<pair<char,int>> ans;
        for(int i=0;i<neededTime.size();i++)
        ans.push_back({colors[i],neededTime[i]});
        sort(ans.begin(),ans.end(),[](auto &a,auto &b){
            if(a.first==b.first)
            return a.second<b.second;
            else
            return false;
        });
        int a=0;
        for(int i=1;i<ans.size();i++){
            if(ans[i-1].first==ans[i].first) a+=ans[i-1].second;
        }
        return a;*/