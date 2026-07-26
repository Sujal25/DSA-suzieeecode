class Solution {
public:
    int candy(vector<int>& ratings) {
        int c=ratings.size();
        vector<int> can(c,1);
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]) 
            can[i]=can[i-1]+1;
        }

        for(int i=ratings.size()-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]) 
            can[i]=max(can[i+1]+1,can[i]);
        }
        int ans=0;
        for(int x:can) ans+=x;
        return ans;
    }
};