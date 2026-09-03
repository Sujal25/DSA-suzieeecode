class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[(x%value+value)%value]++;
        }
        //int cpp for neg -3%4 is -3  int rem = ((x % value) + value) % value;
            
       for(int i=0;i<nums.size();i++){
            if(mp[i%value]==0) return i;
            mp[i%value]--;
        }
        
        return nums.size();
    }
};
//this one is all about modulus cincept 