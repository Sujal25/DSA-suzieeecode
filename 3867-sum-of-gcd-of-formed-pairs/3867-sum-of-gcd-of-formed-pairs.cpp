class Solution {
public:
int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
    
}
    long long gcdSum(vector<int>& nums) {
        vector<int> pregcd;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            pregcd.push_back(gcd(nums[i],mx));

        }
        sort(pregcd.begin(),pregcd.end());
        long long a=0;
        int n=pregcd.size();
        for(int i=0;i<pregcd.size()/2;i++){
            a+=gcd(pregcd[i],pregcd[n-i-1]);
        }
        return a;
    }
};
//given arr nums 
//make pregcd mxi = max(nums[0], nums[1], ..., nums[i])
// gcd of prefixGcd[i] = gcd(nums[i], mxi)
//then sort pregcd  