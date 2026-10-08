class Solution {
public:
void rem(string& s,char c){
    int pos = s.rfind(c);

if (pos != string::npos)
    s.erase(pos, 1);
}
    string minRemoveToMakeValid(string s) {
        string ans="";
        stack<char> st;
        for(char c:s){
            ans+=c;
            if(c=='(') st.push(c);
            else if(c==')'){
                if(st.empty()) rem(ans,')');
                else
                st.pop();
            }
        }
        while(!st.empty()){
        rem(ans,'(');
        st.pop();}
        return ans;
    }
};