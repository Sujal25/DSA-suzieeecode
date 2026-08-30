class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
        unordered_map<int,int> mp2;

    for(char c:s) mp[c]++;
    for(auto &m:mp){
mp2[m.second]++;
    }

    int dec=0;
for(auto &m:mp){
    int f=m.second;
    mp2[f]--;
    while(f>0&&mp2[f]>0){
        dec++;
       f--;
      
    }
    if (f > 0)
    mp2[f]++;
    

}
    // if greater than 1 then move back to place extr to empty 
return dec;
    }

};