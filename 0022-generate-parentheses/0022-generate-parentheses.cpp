class Solution {
public:vector<string> ans;
void para(string&s,int n,stack<char>&st){
    if(n==0){
        if(st.empty())
        ans.push_back(s);
        return;
    }
    if(!st.empty()){
        s.push_back(')');
        st.pop();
        para(s,n-1,st);
        s.pop_back();
        st.push('(');
    }
    s.push_back('(');
    st.push('(');
    para(s,n-1,st);
    st.pop();
    s.pop_back();

}
//stack push every ( and if on top (  then can push ) in str and also pop from stack 
    vector<string> generateParenthesis(int n) {
        stack<char> st;
        string k="";
        para(k,n*2,st);
        return ans;
    }
};