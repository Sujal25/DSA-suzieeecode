class Solution {
public:
    string getHint(string secret, string guess) {
        int bl=0;
        int cw=0;
        int i=0;
        string a="";
        string b="";
        for(char c:secret){
            if(c==guess[i]) bl++;
            else{
                a+=c;
                b+=guess[i];
            }
            i++;
        }
        unordered_map<char,int> mp;
        for(char c:a) mp[c]++;
        for(char c:b) {
            if(mp[c]==0) mp.erase(c);
            if(mp[c]>0) {mp[c]--;
            cw++;}
        }
       return to_string(bl) + "A" + to_string(cw) + "B";
    }
};