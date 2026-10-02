class Solution {
public:
vector<string> ans;
void genpen(string s,int sz,stack<char>&st){
    if(sz==0){
        if(st.empty()) ans.push_back(s);
        return;
    }
    if(st.size()<sz){
        //(
        st.push('(');
        genpen(s+'(',sz-1,st);
        st.pop();
    }
    if(!st.empty()){
        st.pop();
        genpen(s+')',sz-1,st);
        st.push(')');
    }
}
    vector<string> generateParenthesis(int n) {
        stack<char> st;
        string sp="";
        genpen(sp,n*2,st);
        return ans;
    }
};