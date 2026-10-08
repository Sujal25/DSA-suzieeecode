class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        stack<char> st;
        for(char c:s){
           if(c=='('){ st.push(c);
            if(st.size()>1) ans+=c;}
           else{
           if(st.size()!=1) ans+=c;
            st.pop();}
          
        }
        return ans;
    }
};
//stack then 