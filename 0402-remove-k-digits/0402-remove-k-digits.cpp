class Solution {
public:
    string removeKdigits(string num, int k) {
       string ans="";
    
       for(char c:num){
        while(!ans.empty()&&k>0&&ans.back()>c){
            ans.pop_back();
            k--;
        }
        ans.push_back(c);
       }
       while (k > 0) {
            ans.pop_back();
            k--;
        }
       int i=0;
       while(i<=ans.size()&&ans[i]=='0'){
        i++;
       }
       if(ans.substr(i)=="") return "0";
        return ans.substr(i);
    }
};
/*class Solution {
public:vector<string> str;
void mkt(int ind,int k,string&s,string& m){
    if(k==0) {
        m+=s.substr(ind);
       str.push_back(m);
       m.erase(m.size()-(s.size()-ind));
        return;
    }
    if(ind>=s.size()) return;
    
    mkt(ind+1,k-1,s,m);
    m.push_back(s[ind]);
    mkt(ind+1,k,s,m);
     m.pop_back();
    
}
    string removeKdigits(string num, int k) {
        string kp="";
        mkt(0,k,num,kp);
        sort(str.begin(),str.end());
       
        int i=0;
        string ans=str[0];
        while (i < ans.size() && ans[i] == '0') {
            i++;
        }
         if(ans.substr(i)=="") return "0";
        return ans.substr(i);
    }
};*/