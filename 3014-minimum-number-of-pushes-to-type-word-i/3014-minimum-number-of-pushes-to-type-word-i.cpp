class Solution {
public:
    int minimumPushes(string word) {
       unordered_map<char,int> mp;
       int cnt=1;
        int ans=0;
       for(char c:word){
        
         if(mp.size()<8*cnt){
            mp[c]=cnt;
        }else{
            cnt++;
            mp[c]=cnt;
        }
        ans+=mp[c];
        
       }
       return ans; 
    }
};