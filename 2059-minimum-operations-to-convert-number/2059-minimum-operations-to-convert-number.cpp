class Solution {
public:
    int minimumOperations(vector<int>& nums, int start, int goal) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,start});
        vector<int> vis(1001, 0);
        while(!pq.empty()){
            auto k=pq.top();
            int opr=k.first;
            pq.pop();
             vis[k.second]=1;
            if(k.second==goal) return k.first;
            if(k.second<0||k.second>1000) continue;
            for(int i=0;i<nums.size();i++){
                int a=k.second+nums[i];
                int b=k.second-nums[i];
                int c=k.second^nums[i];
                if(a==goal||b==goal||c==goal) return opr+1;
                if(a>=0&&a<=1000&&!vis[a]){
                    vis[a]=1;
                    pq.push({opr+1,a});
                }if(b>=0&&b<=1000&&!vis[b]){
                    vis[b]=1;
                    pq.push({opr+1,b});
                }if(c>=0&&c<=1000&&!vis[c]){
                    vis[c]=1;
                    pq.push({opr+1,c});
                }
                 
                 }

        }
    return -1;
    }
};
//given nums of dist given st and gl int x is intial st opr to conv itno goal 
//if btw 0 1000 then any x + nums[i],x - nums[i],x ^ nums[i] if out of bound then no opr then return min opr. 
//for this queu of pair 