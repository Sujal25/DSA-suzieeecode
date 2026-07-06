class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
    if (a[0] == b[0])
        return a[1] > b[1];  
    return a[0] < b[0];     
});
        int st=intervals[0][0];
        int ed=intervals[0][1];
        int ans=0;
        for(int i=1;i<intervals.size();i++){
            if(ed>=intervals[i][1]&&st<=intervals[i][0]){
                ans++;

            }
            else{
                ed=intervals[i][1];
                st=intervals[i][0];}
            
        }
        return intervals.size()-ans;
    }
};
/*
given interval 

*/