class Solution {
public:
int sl(string &u,int k,char a,char b){
    int sc=0;
    int ans=0;
    int bd=0;
    for(char c:u){
        if(c==a||c==b){
            sc++;
        }
        else{
            sc--;
            bd++;
        }
        ans=max(ans,sc+2*min(k,bd));
    }
    return ans;
}
    int maxDistance(string s, int k) {
        vector<int> dir(4,0);
        //ne,es,sw,wn
       int ans=0;
       ans=max(ans,sl(s,k,'N','E'));
       ans=max(ans,sl(s,k,'N','W'));
       ans=max(ans,sl(s,k,'S','E'));
       ans=max(ans,sl(s,k,'S','W'));
       return ans;
    }
};
/*
class Solution {
public:
int dist(string s){
int i=0;
        int j=0;
        int d=0;
        for(char c:s){
            if(c=='N') i++;
            else if(c=='S') i--;
            else if(c=='W') j++;
            else j--;
            d=max(d, abs(i)+abs(j));
        }
        return d;
}

    int maxDistance(string s, int k) {
       unordered_map<char,int> mp;
       for(char c:s) mp[c]++;
        int maxi=-1;
        char o=s[0];
       for(auto &m:mp){
        if(maxi<m.second){
            maxi=m.second;
            o=m.first;
        }
       }
      
       for(int i=0;i<s.size();i++){
        if(s[i]!=o&&k>0) {
            s[i]=o;
            k--;
            }
       }
        return dist(s);
    }
};*/