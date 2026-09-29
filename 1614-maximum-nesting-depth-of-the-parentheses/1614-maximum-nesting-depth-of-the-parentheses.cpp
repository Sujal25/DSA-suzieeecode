class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        //using stack we can do 
        stack<char> st;
        for(char c:s){
            if(c=='(') st.push('(');
            else if(c==')') {
                ans=max(ans,(int)st.size());
                st.pop();}
        }
        return ans;
    }
};