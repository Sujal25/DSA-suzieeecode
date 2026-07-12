class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> neww={arr.begin(),arr.end()};
        sort(neww.begin(),neww.end());
        unordered_map<int,int> rank;
        int r=1;
        for(int i=0;i<neww.size();i++)
        {
if(rank[neww[i]]>0) continue;
else {rank[neww[i]]=r;
r++;}

        }
        for(int i=0;i<arr.size();i++){
            arr[i]=rank[arr[i]];
        }
        return arr;
    }
};