class Solution {
public:
unordered_map<int,int> mp;
set<int> st;
void fact(int n){
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            mp[i]++;
            st.insert(i);
            n /= i;
        }
    }
    if (n > 1){
        mp[n]++;
        st.insert(n);}

}
void rem(int n){
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            mp[i]--;
            if(mp[i]==0) st.erase(i);
            
            n /= i;
        }
    }
    if (n > 1){
        mp[n]--;
         if(mp[n]==0) st.erase(n);
        }
}
    int longestSubarray(vector<int>& nums, int k) {
        int i=0,j=0;
        int n=nums.size();
        int ans=0;
        while(j<n){
            fact(nums[j]);
            if(st.size()<=k) ans=max(ans,j-i+1);
            while(st.size()>k){
                rem(nums[i]);
                i++;
            }
            j++;

        }
return ans;
    }
};

//making subaraay and findin set of prime factor 
//sliding windwo approach //also fun giveing the factor of no 