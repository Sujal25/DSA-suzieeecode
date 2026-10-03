class Solution {
public:
int serch(vector<pair<int,int>>&vec,int tar){
    int lo=0;
    int hi=vec.size()-1;
    int ind=-1;
    while(lo<=hi){
        int mid=(hi-lo)/2+lo;
        if(vec[mid].first>=tar){
            ind=vec[mid].second;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return ind;
}
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<pair<int,int>> vec;
        vector<int> ans;
        for(int i=0;i<intervals.size();i++){
            vec.push_back({intervals[i][0],i});
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<intervals.size();i++){
            ans.push_back(serch(vec,intervals[i][1]));
        }
        return ans;
    }
};
//storing st with index and then sort them adn don bs for each end 