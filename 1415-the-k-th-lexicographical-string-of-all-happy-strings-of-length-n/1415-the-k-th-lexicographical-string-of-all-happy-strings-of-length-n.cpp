class Solution {
public:
int ans=0;
string a="";
int kk;
int ll;
void happy(string&s){
    if(s.size()==ll){
        ans++;
        if(ans==kk) a=s;
        return;
    }
    if(s.empty()||s.back()!='a') {s.push_back('a');
    happy(s);
    s.pop_back();
    }
    if(s.empty()||s.back()!='b') {s.push_back('b');
    happy(s);
    s.pop_back();}
    if(s.empty()||s.back()!='c') {s.push_back('c');
    happy(s);
    s.pop_back();}    
}
    string getHappyString(int n, int k) {
        ll=n;
        kk=k;
        string p="";
        happy(p);
        
        return a;
    }
};
//happy str a,b,c ,,,s[i] != s[i + 1],,,,give n k return kth string of n length we can add all str of n len thne sort and return kth 
