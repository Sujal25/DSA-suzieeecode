class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        long long ans=0;
        string p=to_string(n);
        string a="";
        int sum=0;
        for(char c:p){
            if(c=='0') continue;
            else{
                a+=c;
                sum+=(c-'0');
            }
        }
        return stoll(a)*sum;
    }
};
