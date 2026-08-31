class Solution {
public:
int m=1e9+7;
long long powerMod(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

    int sumDecoded(vector<long long>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            string k=to_string(nums[i]);
            int wid=(k.back()-'0');
            k.pop_back();
            int x=stoi(k.substr(0,wid));
            int y=stoi(k.substr(wid));
            sum=(sum+powerMod(x,y,m)%m)%m;
        }
        return sum;
    }
};
//given x,y==>nums[i]