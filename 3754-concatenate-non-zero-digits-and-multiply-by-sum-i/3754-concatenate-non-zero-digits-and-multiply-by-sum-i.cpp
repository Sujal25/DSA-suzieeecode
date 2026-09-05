class Solution {
public:
    long long sumAndMultiply(int n) {
        string k="";
        int s=0;
        string b=to_string(n);
        for(char c:b){
            s+=(c-'0');
            if(c!='0') k+=c;
        }
        return stol(k)*s;
    }
};