class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        int i=1;
        for(char c:s){
            ans+=(i*(26-(c-'a')));
            i++;
        }
        return ans;
    }
};