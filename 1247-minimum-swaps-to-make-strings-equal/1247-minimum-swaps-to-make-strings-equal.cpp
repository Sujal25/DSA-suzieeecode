class Solution {
public:
    int minimumSwap(string s1, string s2) {
        if(s1.size()!=s2.size()) return -1;
        int xy=0;
        int yx=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                if(s1[i]=='x') xy++;
                else yx++;
            }
        }
        if ((xy + yx) % 2 != 0)
            return -1;
        return xy/2+yx/2+(xy%2)*2;
    }
};