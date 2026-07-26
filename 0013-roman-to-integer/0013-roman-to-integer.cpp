class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string,int> mp;
        mp["I"]=1;
        mp["V"]=5;
        mp["X"]=10;
        mp["L"]=50;
        mp["C"]=100;
        mp["D"]=500;
        mp["M"]=1000;
        mp["IV"]=4;
        mp["IX"]=9;
        mp["XL"]=40;
        mp["XC"]=90;
        mp["CD"]=400;
        mp["CM"]=900;
        //4,9,40,90,900,400
        int ans=0;
        for(int i=0;i<s.size();i++){
            string a;
            string k(1, s[i]);
            if(i+1!=s.size()){ a+=s[i];
            a+=s[i+1];}
            if(mp.count(a)) {ans+=mp[a]; 
            i++;}
            else ans+=mp[k];
            
        }
        return ans;
    }
};