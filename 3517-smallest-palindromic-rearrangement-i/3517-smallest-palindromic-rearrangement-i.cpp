class Solution {
public:
    string smallestPalindrome(string s) {
    
       int l=s.size();
       if(l<=3) return s;
       if(l%2==0){
        sort(s.begin(),s.begin()+l/2);
        sort(s.begin()+l/2,s.end());
        reverse(s.begin()+l/2,s.end());
        return s;
       }
       sort(s.begin(),s.begin()+l/2);
        sort(s.begin()+l/2+1,s.end());
        reverse(s.begin()+l/2+1,s.end());

return s;
    }
};
/* unordered_map<char,int> mp;
        for(char c:s) mp[c]++;
        string ans="";
        char i='*';
        for(auto m:mp){
            char p=m.first;
            if(mp.count(p)==2) {ans+=p;
            mp[p]--;
            }
            else i=p;
        }
        sort(ans.begin(),ans.end());
        string l=ans;
        reverse(l.begin(),l.end());
        if(i!='*') ans+=i;
        return ans+l;*/