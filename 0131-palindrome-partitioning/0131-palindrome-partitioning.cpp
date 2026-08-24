class Solution {
public:
vector<vector<string>> ans;
bool p(string& s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
void pal(string&s,int ind,vector<string>&a){
if(ind==s.size()){
ans.push_back(a);
return;
}
string k="";
for(int i=ind;i<s.size();i++){
    k.push_back(s[i]);
    if(p(k)) {a.push_back(k);
pal(s,i+1,a);
a.pop_back();}

}

}
    vector<vector<string>> partition(string s) {
        vector<string> a;
        pal(s,0,a);
        return ans;
    }
};