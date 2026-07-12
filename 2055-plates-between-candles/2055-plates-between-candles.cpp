class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n=s.size();
        vector<int> plate(s.size(),0);
        int p=0;
        int k=0;
        int ind = s.find('|');
         if(ind == string::npos) {
            return vector<int>(queries.size(), 0);
        }
        for(int i=ind;i<s.size();i++){
            if(s[i]=='|'){
                k=p;
            }
            else{
                p++;
            }
            plate[i]=k;
        }
        vector<int> next(n,-1);
        vector<int> prev(n,-1);
        int can=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='|'){
                can=i;
            }
            prev[i]=can;
        }
        can=-1;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='|'){
                can=i;
            }
            next[i]=can;
        }
        vector<int> ans;
        for(auto &u:queries){
            int l=next[u[0]];
            int r=prev[u[1]];
            
            if(l==-1||r==-1||l>=r) ans.push_back(0);
            else ans.push_back(plate[r]-plate[l]);
        }
return ans;
    }
};
//0,0,0,0,0,2,2,2,2,5
//if peeche diff then just sub th on both extr then just minus if not then age s peeche peech as aage ayege then 