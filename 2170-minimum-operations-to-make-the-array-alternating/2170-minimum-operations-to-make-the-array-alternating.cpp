class Solution {
public:
    int minimumOperations(vector<int>& nums) {
   unordered_map<int,int> even;
   unordered_map<int,int> odd;
   for(int i=0;i<nums.size();i++){
    if(i%2==0) even[nums[i]]++;
    else odd[nums[i]]++;

   }
   int om=0;
   int em=0;
   int som = -1; // second most frequent odd
        int sem = -1; // second most frequent even

        int maxi = 0;
        int smaxi = 0;
   for (auto &m : even) {
            if (maxi < m.second) {
                smaxi = maxi;
                sem = em;

                maxi = m.second;
                em = m.first;
            }
            else if (smaxi < m.second) {
                smaxi = m.second;
                sem = m.first;
            }
        }

        maxi = 0;
        smaxi = 0;

        // Most + second most frequent in odd positions
        for (auto &m : odd) {
            if (maxi < m.second) {
                smaxi = maxi;
                som = om;

                maxi = m.second;
                om = m.first;
            }
            else if (smaxi < m.second) {
                smaxi = m.second;
                som = m.first;
            }
        }

        int evenCount = (nums.size() + 1) / 2;
        int oddCount = nums.size() / 2;

        int opr;

        if (em != om) {
            // Most frequent values are different
            opr = evenCount - even[em]
                + oddCount - odd[om];
        }
        else {
            // Most frequent values are same,
            // so use second best on one side
            opr = min(
                evenCount - even[em] + oddCount - odd[som],
                evenCount - even[sem] + oddCount - odd[om]
            );
        }

        return opr;
    }
};
    
/*     unordered_map<int,int> mp;
        for(int x:nums) mp[x]++;
        int maxi=0;

         int m = -1;   // most frequent
        int sm = -1;  // second most frequent
int secondMaxi=0;
        // Find maximum and second maximum
        for (auto &x : mp) {
            if (x.second > maxi) {
                secondMaxi = maxi;
                sm = m;
                maxi = x.second;
                m = x.first;
            }
            else if (x.second > secondMaxi) {
                secondMaxi = x.second;
                sm = x.first;
            }
        }
        int ans=INT_MAX;
        int k=0;
        int p=0;
        int a=0;
        int b=0;
        //k,b
        //p,a
        for(int i=0;i<nums.size();i+=2){
            if(nums[i]==m) k++;
            if(nums[i]==sm) a++;
            if(i + 1 < nums.size()) {
        if(nums[i+1] == m) p++;
        if(nums[i+1] == sm) b++;
    }
        }
        int even=(nums.size()+1)/2;
        int odd=nums.size()/2;
        ans=min(ans,even+odd-k-b);
        ans=min(ans,even+odd-p-a);
        return ans;*/