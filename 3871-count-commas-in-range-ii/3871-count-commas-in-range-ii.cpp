class Solution {
public:
    long long countCommas(long long n) {
        unordered_map<int,long long> mp;
        mp[1]=999999-1000+1;
        mp[2]=2LL*(999999999-1000000+1);
        mp[3]=3LL*(999999999999-1000000000+1);
        mp[4] = 4LL * (999999999999999LL - 1000000000000LL + 1);
        string p=to_string(n);
        int sz=p.size();
         if (sz >= 16)
            return mp[1] + mp[2] + mp[3] + mp[4]
                   + 5LL * (n - 1000000000000000LL + 1);

        else if(sz>=13) return (mp[3]+mp[2]+mp[1])+4LL*(n-1000000000000LL+1);
        else if(sz>=10) return (mp[1]+mp[2])+3LL*(n-1000000000LL+1);
        else if(sz>=7) return mp[1]+2LL*(n-1000000LL+1);
       else if (sz >=4)
            return max(0LL, n - 999LL);
        else
            return 0;
        
        //mp the range 
    }
};