class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> fre(26,0);
        int l=0;
        int len=0;
        int mx=0;
        for(int r=0;r<s.size();r++){
            fre[s[r]-'A']++;
            mx=max(mx,fre[s[r]-'A']);
            if(r-l+1-mx<=k) len=max(len,r-l+1);
            else{
                fre[s[l]-'A']--;
                l++;
            }
        }
        return len;
    }
};
//sub having sam let andskipp cnt then adn then 