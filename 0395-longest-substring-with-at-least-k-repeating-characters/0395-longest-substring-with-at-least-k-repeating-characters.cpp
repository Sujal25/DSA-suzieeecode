class Solution {
public:
int solve(string& s,int l,int r,int k){
if(r-l+1<k) return 0;
unordered_map<char,int> mp;
for(int i=l;i<=r;i++) mp[s[i]]++;
for(int i=l;i<=r;i++){
    if(mp[s[i]]<k){
        int left=solve(s,l,i-1,k);
        int right=solve(s,i+1,r,k);
        return max(left,right);
    }
}
return r-l+1;

}
    int longestSubstring(string s, int k) {
        
        return solve(s,0,s.size()-1,k);
    }
};
/*
        while(j<s.size()){
            mp[s[j]]++;
            while(mp[s[j]]>k){
                if(mp[s[i]]==0) mp.erase(s[i]);
                mp[s[i]]--;
                i++;

            }
            j++;
            len=max(len,j-i+1);
        }*/
