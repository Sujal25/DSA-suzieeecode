class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> a;
        for(int x:nums){
            string k=to_string(x);
            a.push_back(k);
        }
        sort(a.begin(),a.end(),[](auto &p,auto &b){
            return p + b > b + p;
        });
        string ans="";
        for(auto &str:a){
            ans+=str;
        }
if(ans[0]=='0') return "0";
return ans;
    }
};