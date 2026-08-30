class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char,int> mp;
        for(char c:word){
            mp[c]++;
        }
        multiset<int> mt;
        for(auto &m:mp){
            mt.insert(m.second);

    }
        int x=*mt.begin();
        int y=*mt.rbegin();
        int ans=INT_MAX;
         auto it = mt.begin();
//it on smallest 
        while (it != mt.end()) {
            int x = *it;
            int rem = 0;
            auto jt = mt.begin();
            while (jt != mt.end()) {
                int f = *jt;
                if (f < x)
                    rem += f;
                else if (f > x + k)
                    rem += f - (x + k);
                jt++;
            }
            ans = min(ans, rem);
            it++;
        }
        //freq of cahr 
        //maxi-mini<=k ans=0; make this 
        //can be remove mini//x
return ans;
    }
};