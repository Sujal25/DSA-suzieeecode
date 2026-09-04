class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(),nums.end());
        int lo=0;
        int hi=nums.back()-nums[0];
        while(lo<=hi){
            int mid=(hi-lo)/2+lo;
            int pair=0;
            for(int i=1;i<nums.size();i++){
                if(nums[i]-nums[i-1]<=mid){
                    pair++;
                    i++;
                }
            }
            if(pair>=p){
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return lo;
    }

};
/*if(p==0) return 0;
        int n=nums.size();
       vector<int> vis(n,0);
       vector<int> a;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size()-1;i++){
            if(abs(nums[i]-nums[i-1])<abs(nums[i]-nums[i+1])){
                if(!vis[i]&&!vis[i-1]){
             a.push_back(abs(nums[i]-nums[i-1]));
             vis[i]=1;
             vis[i-1]=1;}
             }
             else{
                if(!vis[i]&&!vis[i+1]){
                a.push_back(abs(nums[i]-nums[i+1]));
                             vis[i]=1;
             vis[i+1]=1;}}
             }
        
        //peeche s pairing 
        sort(a.begin(),a.end());
        return a[p-1];*/