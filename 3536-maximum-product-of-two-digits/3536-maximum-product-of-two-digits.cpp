class Solution {
public:
    int maxProduct(int n) {
        string ans=to_string(n);
        sort(ans.begin(),ans.end());
        int k=ans.size()-1;
        return (ans[k]-'0')*(ans[k-1]-'0');
    }
};
